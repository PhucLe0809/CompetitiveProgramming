#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    vector <int> inp(n+2), ind(n+2);
    for (int i = 1; i <= n; i++){
        cin >> inp[i];
        ind[inp[i]] = i;
    }
    ind[n+1] = n+1;
    int cnt = 1, thend = 1;
    for (int i = 1; i <= n; i++){
        if (thend > ind[i]) cnt++;
        thend = ind[i];
    }
    while (m--){
        int x, y; cin >> x >> y;
        int r = inp[x], s = inp[y];
        swap(inp[x], inp[y]);
        if (ind[r-1] <= ind[r] && ind[r-1] > y) cnt++;
        if (ind[r-1] > ind[r] && ind[r-1] <= y) cnt--;
        if (ind[r+1] < ind[r] && ind[r+1] >= y) cnt--;
        if (ind[r+1] >= ind[r] && ind[r+1] < y) cnt++;
        ind[r] = y; 
        if (ind[s-1] <= ind[s] && ind[s-1] > x) cnt++;
        if (ind[s-1] > ind[s] && ind[s-1] <= x) cnt--;
        if (ind[s+1] < ind[s] && ind[s+1] >= x) cnt--;
        if (ind[s+1] >= ind[s] && ind[s+1] < x) cnt++;
        ind[s] = x; 
        cout << cnt << '\n';
    }
    return 0;
}