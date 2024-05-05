#include <bits/stdc++.h>
#define maxarray 100005
#define limit 1e9

using namespace std; 
vector <int32_t> inp;
map <int32_t, int64_t> mp;
vector <pair <int32_t, int64_t>> scan;

bool comp(pair<int32_t, int64_t> a, pair<int32_t, int64_t> b){
    return (a < b);
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    int32_t x;
    for (int i = 0; i < n; i++){
        cin >> x; mp[x]++;
        inp.push_back(x);
    }
    sort(inp.begin(), inp.end());
    if (inp[n-1]+inp[n-2] < m) cout << "1.000";
    else{
        for(auto it:mp) scan.push_back({it.first, it.second});
        int32_t pos = lower_bound(scan.begin(), scan.end(), pair <int32_t, int64_t> (m, 0), comp)-scan.begin();
        int64_t cnt, prefix;
        int32_t i, j, k; 
        cnt = prefix = 0;
        i = 0; j = pos-1; k = i;
        while (i < j){
            while (scan[i].first < m-scan[j].first){
                if (k-i!=0) prefix += scan[i].second; 
                i++;
            }
            cnt += (prefix*(scan[j].second));
            k = i; j--; i = max(i-1, 0);
            if (scan[i].first*2<m && scan[i].second>1){
                cnt += (scan[i].second)*(scan[i].second-1)/2;
            }
            if (scan[j].first*2<m && scan[j].second>1){
                cnt += (scan[j].second)*(scan[j].second-1)/2;
            }
        }
        // cout << pos << " " << cnt << '\n';
        double down = (int64_t(n)*int64_t(n-1)/int64_t(2))*1.0;
        cout << fixed << setprecision(3) << cnt*1.0/down;
    }
    return 0;
}