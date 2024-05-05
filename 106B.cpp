#include <bits/stdc++.h>

using namespace std;
struct laptop{
    int speed, ram, hdd, cost;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <laptop> inp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i].speed >> inp[i].ram >> inp[i].hdd >> inp[i].cost;
    }
    vector <bool> tick(n, true);
    vector <pair<int, int>> scan;
    for (int i = 0; i < n; i++){
        for (int j = 0; j<n && tick[i]; j++){
            tick[i] = !(inp[j].speed>inp[i].speed && inp[j].ram>inp[i].ram && inp[j].hdd>inp[i].hdd);
        }
        if (tick[i]) scan.push_back({inp[i].cost, i+1});
    }
    sort(scan.begin(), scan.end());
    cout << scan[0].second << '\n';
    // for (auto &it:scan) cout << it.second << " ";
    return 0;
}