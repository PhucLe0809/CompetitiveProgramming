#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> tick(n+1);
    int u, v;
    for (int i = 0; i < n-1; i++){
        cin >> u >> v; 
        tick[u]++; tick[v]++;
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) if (tick[i]==1) cnt++;
    cout << cnt;
    return 0;
}