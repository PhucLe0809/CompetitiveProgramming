#include <bits/stdc++.h>

using namespace std; 
int32_t a[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    map <int32_t, int32_t> mp;
    int32_t x;
    for (int i = 0; i < m; i++){
        cin >> x;
        mp[x]++;
    }
    for (int i = 0; i < n; i++){
        if (mp[a[i]]) cout << a[i] << " ";
    }
    return 0;
}