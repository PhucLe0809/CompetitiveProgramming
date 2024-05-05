#include <bits/stdc++.h>
#define inf 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    map <int, pair<int, int>> mp;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            int key = k - (inp[i] + inp[j]);
            if (mp.find(key) != mp.end()){
                cout << i+1 << " " << j+1 << " " << mp[key].first+1 << " " << mp[key].second+1;
                return 0;
            }
        }
        for (int j = i-1; j >= 0; j--) mp[inp[i] + inp[j]] = {i, j};
    }
    cout << "IMPOSSIBLE";
    return 0;
}