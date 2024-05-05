#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; int32_t n, pos;
    while (test--){
        cin >> n >> str; 
        if (str.size()<11) cout << "NO\n";
        else{
            for (pos = 0; pos <= str.size()-11; pos++){
                if (str[pos]=='8') break;
            }
            if (pos+11<=str.size()) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}