#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, maxabs, minn, maxx;
    while (test--){
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> inp[i];
        minn = *min_element(inp, inp+n);
        maxx = *max_element(inp, inp+n);
        maxabs = maxx-minn;
        if (2*k < maxabs) cout << -1 << '\n';
        else cout << minn+k << '\n';
    }
    return 0;
}