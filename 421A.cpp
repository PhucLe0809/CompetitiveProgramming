#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, a, b; cin >> n >> a >> b;
    map <int32_t, int32_t> mp;
    for (int i = 1; i <= n; i++) mp[i]=0;
    int32_t x;
    for (int i = 0; i < a; i++){
        cin >> x; mp[x]=1;
    }
    for (int i = 0; i < b; i++){
        cin >> x;
        if (mp[x]==0) mp[x]=2;
    }
    for (auto it:mp) cout << it.second << " ";
    return 0;
}