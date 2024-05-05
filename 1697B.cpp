#include <bits/stdc++.h>
#define maxarray 200005 

using namespace std; 
int64_t inp[maxarray], prefix[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    sort(inp+1, inp+n+1, greater<>());
    prefix[0] = 0;
    for (int i = 1; i <= n; i++) prefix[i] = prefix[i-1]+inp[i];
    int32_t x, y;
    while (q--){
        cin >> x >> y;
        cout << prefix[x]-prefix[x-y] << '\n';
    }
    return 0;
}