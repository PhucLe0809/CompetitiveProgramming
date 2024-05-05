#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, i, j, cnt0, cnt1;
    string str, ansi;
    bool check;
    while (test--){
        cin >> n >> m;
        cin >> str >> ansi;
        check = true;
        i = n-1; j = m-1;
        while (i>n-m && j>-1 && check){
            if (str[i]!=ansi[j]) check = false;
            else {i--; j--;}
        }
        if (!check) cout << "NO\n";
        else{
            cnt0 = cnt1 = 0;
            for (; i >-1; i--){
                if (str[i]=='0') cnt0++;
                else cnt1++;
            }
            if ((ansi[0]=='0' && cnt0) || (ansi[0]=='1' && cnt1))
                cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}