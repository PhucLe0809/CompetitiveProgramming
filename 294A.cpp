#include <bits/stdc++.h>

using namespace std; 
int32_t bird[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> bird[i];
    int32_t m; cin >> m;
    int32_t x, y;
    while (m--){
        cin >> x >> y;
        if (x-1>=1) bird[x-1] += y-1;
        if (x+1<=n) bird[x+1] += max(bird[x]-y, 0);
        bird[x] = 0;
    }
    for (int i = 1; i <= n; i++) cout << bird[i] << '\n';
    return 0;
}