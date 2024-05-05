#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, k; cin >> n >> k;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    map <int, int> mp;
    int i = 0, j = 0, cnt = 0;
    while (j < n){
        mp[inp[j]]++;
        while ((int)mp.size() > k){
            mp[inp[i]]--;
            if (mp[inp[i]] == 0) mp.erase(mp.find(inp[i]));
            i++;
        }
        cnt += (j - i + 1);
        j++;
    }
    cout << cnt << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; //cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}