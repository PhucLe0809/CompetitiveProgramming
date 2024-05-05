#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    map <int, int> mp;
    int64_t answer = 0;
    int l = 0, r = 0, cnt = 0;
    while (l < n){
        while (r < n && cnt + (mp[inp[r]] == 0) <= k){
            cnt += (mp[inp[r]] == 0);
            mp[inp[r]]++;
            r++;
        }
        answer += (r - l);
        cnt -= (mp[inp[l]] == 1);
        mp[inp[l]]--; l++;
    }
    cout << answer;
    return 0;
}