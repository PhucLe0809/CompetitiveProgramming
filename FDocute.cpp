#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, k, infront, cnt;
    while (test--){
        cin >> n >> k;
        vector <int> inp(n+1);
        vector <pair<int, int>> scan;
        for (int i = 0; i < n; i++) cin >> inp[i];
        cnt = 0; infront = inp[0]; inp[n] = inp[n-1]-1;
        for (int i = 1; i <= n; i++){
            if (inp[i-1] > inp[i]){
                scan.push_back({infront, inp[i-1]});
                infront = inp[i];
            }
        }
        sort(scan.begin(), scan.end());
        bool check = true;
        for (int i = 1; i<scan.size() && check; i++){
            // cout << scan[i].first << " " << scan[i].second << endl;
            check = (scan[i].first > scan[i-1].second);
        }
        if (check && scan.size()<=k) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}