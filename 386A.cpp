#include <bits/stdc++.h>

using namespace std; 
pair <int32_t, int32_t> inp[1005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> inp[i].first; inp[i].second = i;
    }
    sort(inp+1, inp+n+1);
    cout << inp[n].second << " " << inp[n-1].first;
    return 0;
}