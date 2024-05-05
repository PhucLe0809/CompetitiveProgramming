#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; int32_t cnt;
    while (test--){
        cin >> str; cnt = 0;
        for (auto x:str){
            if (x=='?') cnt++;
        }
        if (str[0]=='0') cout << 0 << '\n';
        else{
            if (cnt==0) cout << 1 << '\n';
            else if (str[0]=='?') cout << 9*pow(10, cnt-1) << '\n';
                else cout << pow(10, cnt) << '\n'; 
        }
    }
    return 0;
}