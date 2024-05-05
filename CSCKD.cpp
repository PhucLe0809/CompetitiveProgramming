#include <bits/stdc++.h>

using namespace std; 

string str_plus(string str, string ansi){
    vector <string> summation;
    int32_t limit = max(str.size(), ansi.size());
    while (str.size() < limit) str.insert(str.begin(), '0');
    while (ansi.size() < limit) ansi.insert(ansi.begin(), '0');
    int32_t res, plus;
    res = 0; 
    for (int i = limit-1; i > 0; i--)
    {
        plus = int(str[i])+int(ansi[i])-2*48 + res;
        summation.push_back(to_string(plus % 10));
        res = plus/10;
    }
    summation.push_back(to_string(int(str[0])+int(ansi[0])-2*48 + res));
    reverse(summation.begin(), summation.end());
    string result = "";
    for (auto x:summation) result += x;
    return result;
}
string multi_big_num(string one, string two){
    vector <string> multi(1005);
    while (*one.begin() == '0') one.erase(one.begin());
    while (*two.begin() == '0') two.erase(two.begin());
    int32_t res, temp;
    string plus, infront;
    for (int i = two.size()-1; i >= 0; i--){
        plus = ""; res = 0;
        for (int j = one.size()-1; j > 0; j--){
            temp = (two[i]-'0')*(one[j]-'0') + res;
            plus += to_string(temp%10);
            res = temp/10;
        }
        temp = (two[i]-'0')*(one[0]-'0') + res;
        infront = to_string(temp);
        reverse(infront.begin(), infront.end());
        plus += infront;
        reverse(plus.begin(), plus.end());
        multi[two.size()-i-1] = plus;
    }
    for (int i = 0; i < two.size(); i++){
        for (int j = 0; j < i; j++)
            multi[i].push_back('0');
    }
    int32_t pivot = multi[two.size()-1].size();
    for (int i = 0; i < two.size(); i++){
        while (multi[i].size() < pivot) multi[i].insert(0, "0");
        //plus = multi[i]; cout << plus << '\n';
    }
    string result = ""; res = 0;
    for (int j = multi[0].size()-1; j >= 0; j--){
        temp = 0;
        for (int i = 0; i < two.size(); i++)
            temp += (multi[i][j]-'0');
        temp += res;
        if (j != 0){
            result += to_string(temp%10);
            res = temp/10;
        } else{
            infront = to_string(temp);
            reverse(infront.begin(), infront.end());
            result += infront;
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, v, d; cin >> n >> v >> d;
    string one = multi_big_num(to_string(n), to_string(v));
    string two = multi_big_num(to_string(n*(n-1)/2), to_string(d));
    cout << str_plus(one, two);
    return 0;
}