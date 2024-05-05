#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; n = 8;
    map <char, int32_t> mp;
    mp['Q']=9; mp['R']=5; mp['B']=3; mp['N']=3; mp['P']=1; mp['K']=0;
    mp['q']=9; mp['r']=5; mp['b']=3; mp['n']=3; mp['p']=1; mp['k']=0;
    int32_t w, b; w = b = 0;
    char x;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> x;
            if ('a'<=x && x<='z') b += mp[x];
            else if (x!='.') w += mp[x];
        }
    }
    if (w > b) cout << "White\n";
    else if (w < b) cout << "Black\n";
        else cout << "Draw\n";
    return 0;
}