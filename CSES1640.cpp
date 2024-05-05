#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, x; cin >> n >> x;
    vector <pair<int, int>> inp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i].first;
        inp[i].second = i+1;
    }
    sort(inp.begin(), inp.end());
    vector <int> scan;
    for (auto &it:inp) scan.push_back(it.first);
    for (int i = 0; i < n; i++){
        auto it = lower_bound(scan.begin() + i+1, scan.end(), x - inp[i].first);
        if (it == scan.end() || *it != x-inp[i].first) continue;
        int j = it - scan.begin();
        cout << inp[i].second << " " << inp[j].second;
        return 0;
    }
    cout << "IMPOSSIBLE";
    return 0;
}