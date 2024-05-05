#include <bits/stdc++.h>

using namespace std; 
int32_t inp[1005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, v; cin >> n >> v;
    for (int i = 0; i < n; i++) cin >> inp[i];
    sort(inp, inp+n);
    int32_t sum = 0;
    for (int i = 0; i < n-1; i++) sum += inp[i];
    if (sum > v) cout << "NO\n";
    else cout << "YES\n";
    return 0;
}