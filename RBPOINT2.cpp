#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <pair<int, int>> point(2*n);
    for (int i = 0; i < n; i++){
        cin >> point[i].first; point[i].second = 0;
    }
    for (int i = n; i < 2*n; i++){
        cin >> point[i].first; point[i].second = 1;
    }
    sort(point.begin(), point.end());
    int res = LONG_MAX;
    for (int i = 0; i < 2*n - 1; i++){
        if (point[i].second != point[i+1].second) res = min(res, point[i+1].first - point[i].first);
    }
    cout << res;
    return 0;
}