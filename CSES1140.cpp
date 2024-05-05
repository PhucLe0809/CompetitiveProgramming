#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int a[maxarray], b[maxarray], p[maxarray];
map <int, int> mp;
int64_t dp[2*maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> p[i];
        b[i]++;
        mp[a[i]]; mp[b[i]];
    }
    int rank = 0;
    for (auto &it:mp) it.second = ++rank;
    vector <vector<pair<int, int>>> scan(rank+1);
    for (int i = 0; i < n; i++){
        scan[mp[b[i]]].push_back({mp[a[i]], p[i]});
    }
    for (int i = 1; i <= rank; i++){
        dp[i] = dp[i-1];
        for (auto &it:scan[i]){
            dp[i] = max(dp[i], dp[it.first] + it.second);
        }
    }
    cout << dp[rank];
    return 0;
}