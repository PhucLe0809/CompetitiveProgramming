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
            if (x=='N') cnt++;
        }
        if (cnt==1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}