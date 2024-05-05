#include <bits/stdc++.h>

using namespace std;

struct Bint {
    static const int mod = 1e9;
    static const int amount_digit = 9;
    vector<int> digits = {0};

    Bint () { }

    Bint (long long number) {
        digits.clear();
        while (number > 0) {
            digits.push_back(number % mod);
            number /= mod;
        }
    }

    Bint (string number) {
        int *p = new int[amount_digit];
        p[0] = 1; p[1] = 10;
        for (int i = 2; i < amount_digit; i++) p[i] = p[i - 1] * p[1];
        int counter = 0;
        int digit = 0;
        for (int i = number.length() - 1; i >= 0; i--) {
            int convert = number[i] - '0';
            digits[digit] = convert * p[counter] + digits[digit];
            if (++counter == 9) {
                counter = 0;
                digit++;
                digits.push_back(0);
            }
        }
    }

    void balance(Bint &a) {
        while (a.digits.size() > digits.size()) digits.push_back(0);
        while (digits.size() > a.digits.size()) a.digits.push_back(0);
    }

    int compare (Bint &cur) {
        while (digits.back() == 0 && digits.size() > 1) digits.pop_back();
        while (cur.digits.back() == 0 && cur.digits.size() > 1) cur.digits.pop_back();
        int a = cur.digits.size();
        int b = digits.size();
        if (a == b) {
            for (int i = digits.size() - 1; i >= 0; i--) {
                if (digits[i] > cur.digits[i]) return 3;
                if (digits[i] < cur.digits[i]) return 1;
            }
            return 2;
        }
        if (a > b) return 1;
        return 3;
    }

    string toString() const {
        string out = "";
        bool first = true;
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (!digits[i] && first) continue;
            string convert = to_string(digits[i]);
            if (!first) {
                while (convert.length() < amount_digit) convert = "0" + convert;
            }
            first = false;
            out += convert;
        }
        if (out.empty()) out = "0";
        return out;
    }

    int digit() {
        bool first = true;
        int out = 0;
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (!digits[i] && first) continue;
            if (first) {
                int number = digits[i];
                while (number > 0) {
                    out++;
                    number /= 10;
                }
                first = false;
            } else out += amount_digit;
        }
        return out;
    }

    Bint divide (Bint &a, bool redual) {
        int dig = digit();
        int *p = new int[amount_digit + 1];
        p[0] = 1;
        p[1] = 10;
        for (int i = 2; i < amount_digit; i++) {
            p[i] = p[i - 1] * p[1];
        }
        int *sub = new int[dig + 1];
        int tmp = 0;
        int num = digits[digits.size() - 1];
        while (num > 0) {
            tmp++;
            num /= 10;
        }
        vector<int> res = digits;
        while (res.back() == 0 && res.size() > 1) res.pop_back();
        for (int i = dig; i >= 1; i--) {
            int index = res.size() - 1;
            sub[dig - i + 1] = res[index] / p[tmp - 1];
            res[index] %= p[tmp - 1];
            if (--tmp == 0) {
                tmp = amount_digit;
                res.pop_back();
            }
        }
        Bint *pre = new Bint[11];
        Bint *mul = new Bint[11];
        pre[0] = mul[0] = Bint(0);
        for (int i = 1; i <= 10; i++) {
            mul[i] = mul[i - 1] + a;
            pre[i] = Bint(i);
        }
        Bint hold;
        Bint out;
        for (int i = 1; i < a.digit(); i++) {
            hold = hold * pre[10] + pre[sub[i]];
        }
        for (int i = a.digit(); i <= dig; i++) {
            hold = hold * pre[10] + pre[sub[i]];
            int k = 1;
            while (hold > mul[k]) ++k;
            if (hold < mul[k]) k--;
            out = out * pre[10] + pre[k];
            hold -= mul[k];
        }
        delete[] p;
        delete[] sub;
        delete[] pre;
        delete[] mul;
        if (redual) return hold;
        else return out;
    }

    bool operator == (Bint &a) {
        return compare(a) == 2;
    }

    bool operator != (Bint &a) {
        return compare(a) != 2;
    }

    bool operator > (Bint &a) {
        return compare(a) == 3;
    }

    bool operator < (Bint &a) {
        return compare(a) == 1;
    }

    bool operator >= (Bint &a) {
        return compare(a) > 1;
    }

    bool operator <= (Bint &a) {
        return compare(a) < 3;
    }

    Bint& operator += (Bint &a) {
        balance(a);
        bool carry = 0;
        for (int i = 0; i < (int)digits.size(); i++) {
            digits[i] += a.digits[i] + carry;
            carry = digits[i] >= mod;
            if (carry) digits[i] -= mod;
        }
        if (carry) digits.push_back(carry);
        return *this;
    }

    Bint& operator -= (Bint &a) {
        if (*this < a) {
            digits = {0};
            return *this;
        }
        balance(a);
        bool carry = 0;
        for (int i = 0; i < (int)digits.size(); i++) {
            bool temp = digits[i] < a.digits[i] + carry;
            if (temp) digits[i] += mod - a.digits[i] - carry;
            else digits[i] -= a.digits[i] + carry;
            carry = temp;
        }
        return *this;
    }

    Bint& operator *= (Bint &a) {
        vector<int> res;
        for (int i = 0; i < (int)a.digits.size(); i++) {
            for (int j = 0; j < (int)digits.size(); j++) {
                int index = i + j;
                while ((int)res.size() <= index) res.push_back(0);
                long long mul = 1LL * digits[j] * a.digits[i];
                while (mul > 0) {
                    while ((int)res.size() <= index) res.push_back(0);
                    mul += res[index];
                    res[index] = mul % mod;
                    mul /= mod;
                    index++;
                }
            }
        }
        digits = res;
        return *this;
    }

    Bint& operator /= (Bint &a) {
        if (*this < a) {
            digits = {0};
            return *this;
        }
        digits = divide(a, false).digits;
        return *this;
    }

    Bint& operator %= (Bint &a) {
        if (*this < a) return *this;
        digits = divide(a, true).digits;
        return *this;
    }

    Bint operator + (Bint &a) {
        Bint temp(*this);
        temp += a;
        return temp;
    }

    Bint operator + (int a) {
        Bint temp(*this);
        Bint x(a);
        temp += x;
        return temp;
    }

    Bint operator - (Bint &a) {
        Bint temp(*this);
        temp -= a;
        return temp;
    }

    Bint operator - (int a) {
        Bint temp(*this);
        Bint x(a);
        temp -= x;
        return temp;
    }

    Bint operator * (Bint &a) {
        Bint temp(*this);
        temp *= a;
        return temp;
    }

    Bint operator / (Bint &a) {
        Bint temp(*this);
        temp /= a;
        return temp;
    }

    Bint operator / (int a) {
        Bint temp(*this);
        Bint x(a);
        temp /= x;
        return temp;
    }

    Bint operator % (Bint &a) {
        Bint temp(*this);
        temp %= a;
        return temp;
    }

    friend ostream& operator << (ostream& os, const Bint& a) {
        os << a.toString();
        return os;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string a, b; cin >> a >> b;
    Bint x(a), y(b);
    cout << x / y << '\n';
    return 0;
}
