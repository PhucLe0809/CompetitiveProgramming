#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        int x; cin >> x; mp[x]++;
    }
    int answer = 0;
    vector <int> scan;
    for (auto &it:mp){
        if (it.second > 1){
            scan.push_back(it.first);
            if (it.second > 3) answer = it.first * it.first;
        }
    }
    int len = scan.size();
    if (scan.size() > 1) answer = max(answer, scan[len-1] * scan[len-2]);
    cout << answer;
    return 0;
}