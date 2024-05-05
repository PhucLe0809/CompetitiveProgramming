#include <bits/stdc++.h>

using namespace std; 
string pascal[105][105];

string str_plus(string str, string ansi)
{
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
    string out = "";
    for (auto x: summation) out += x;
    return out;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k; cin >> n >> k;
    pascal[0][0] = "1";
    pascal[1][0] = pascal[1][1] = "1";
    for (int i = 2; i <= n; i++){
        pascal[i][0] = pascal[i][i] = "1";
        for (int j = 1; j < i; j++){
            pascal[i][j] = str_plus(pascal[i-1][j-1], pascal[i-1][j]);
        }
    }
    // for (int i = 0; i <= n; i++){
    //     for (int j = 0; j <= i; j++)
    //         cout << pascal[i][j] << " ";
    //     cout << '\n';
    // }
    cout << pascal[n][k];
    return 0;
}