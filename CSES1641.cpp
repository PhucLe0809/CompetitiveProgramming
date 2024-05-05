#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <pair<int, int>> inp;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        inp.push_back({x, i});
    }
    sort(inp.begin(), inp.end());
    vector <int> scan(n), ind(n);
    for (int i = 0; i < n; i++){
        scan[i] = inp[i].first;
        ind[i] = inp[i].second;
    }
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            int key = k - (scan[i] + scan[j]);
            if (key < scan[j]) continue;
            auto it = lower_bound(scan.begin() + j+1, scan.end(), key);
            if (it == scan.end() || *it != key) continue;
            int pos = it - scan.begin();
            cout << ind[i] << " " << ind[j] << " " << ind[pos];
            return 0;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}