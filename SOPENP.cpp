#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int calc(vector <int> &inp, int &n, int k){
    int cnt = 0;
    map <int, int> mp;
    for (int l = 0, r = 0; r < n; r++){
        mp[inp[r]]++;
        while ((int)mp.size() > k){
            mp[inp[l]]--;
            if (mp[inp[l]] == 0) mp.erase(mp.find(inp[l]));
            l++;
        }
        cnt += (r - l + 1);
    }
    return cnt;
}
void GOTOHANOI(){
    int n, a, b; cin >> n >> a >> b;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    cout << calc(inp, n, b) - calc(inp, n, a-1) << endl;
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