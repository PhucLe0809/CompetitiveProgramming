#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    int32_t cntSF, cntFS;
    cntSF = cntFS = 0;
    for (int i = 1; i < n; i++){
        if (str[i]!=str[i-1]){
            if (str[i]=='F') cntSF++;
            else cntFS++;
        }
    }
    if (cntSF > cntFS) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}