#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

string str_multi(string one, string two){
    int a = one.size();
    int b = two.size();
    vector<string> multi(1005);
    string plus, infront;
    int res, temp;
    for (int i = b - 1; i >= 0; i--){

        plus = "";
        res = 0;
        for (int j = a - 1; j >= 0; j--){
            temp = (two[i] - 48) * (one[j] - 48) + res;
            plus += char(temp % 10 + 48);
            res = temp / 10;
        }
        if (res != 0 || plus.empty())
            plus += char(res + 48);
        reverse(plus.begin(), plus.end());
        multi[b - i - 1] = plus;
    }
    for (int i = 0; i < b; i++){
        for (int j = 0; j < i; j++){
            multi[i].push_back('0');
        }
    }
    int psize = multi[b - 1].size();
    for (int i = 0; i < b; i++){
        while ((int)multi[i].size() < psize)
            multi[i].insert(0, "0");
    }
    string out = "";
    res = 0;
    for (int j = psize - 1; j >= 0; j--){
        temp = 0;
        for (int i = 0; i < b; i++){
            temp += (multi[i][j] - 48);
        }
        temp += res;
        out += char(temp % 10 + 48);
        res = temp / 10;
    }
    if (res != 0 || out.empty())
        out += char(res + 48);
    reverse(out.begin(), out.end());
    while (out[0] == '0' && out.size() > 1)
        out.erase(0, 1);
    return out;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str, ansi;
    cin >> str >> ansi;
    cout << str_multi(str, ansi);
    return 0;
}
