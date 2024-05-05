#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int x;
    vector <pair<int, int>> inp;
    for (int i = 1; i <= n; i++){
        cin >> x; inp.push_back({x, i});
    }
    sort(inp.begin(), inp.end());
    if (inp[n-1].first<=m) cout << n;
    else{
        vector <int> scan;
        int pivot = ceil(inp[n-1].first*1.0/m);
        for (int i = n-1; i>=0; i--){
            if (int(ceil(inp[i].first*1.0/m))==pivot){
                scan.push_back(inp[i].second);
            }
        }
        sort(scan.begin(), scan.end());
        cout << scan[scan.size()-1];
    }
    return 0;
}