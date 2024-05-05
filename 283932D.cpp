#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
struct assistant{
    int t, z, y;
};

bool is_good(vector <assistant> &inp, int &m, int &mid){
    int cnt = 0;
    for (auto &it:inp){
        cnt += (mid / (it.z * it.t + it.y)) * it.z + min((mid % (it.z * it.t + it.y)) / it.t, it.z);
    }
    return cnt >= m;
}
void GOTOHANOI(){
    int m, n; cin >> m >> n;
    vector <assistant> inp(n);
    for (auto &it:inp) cin >> it.t >> it.z >> it.y;
    int l = 0, r = 2e9;
    while (l < r){
        int mid = (l + r) / 2;
        // cout << mid << endl;
        if (!is_good(inp, m, mid)) l = mid + 1;
        else r = mid;
    }
    cout << l << endl;
    vector <int> out; int res = 0;
    for (auto &it:inp){
        int ball = (l / (it.z * it.t + it.y)) * it.z + min((l % (it.z * it.t + it.y)) / it.t, it.z);
        out.push_back(ball); res += ball;
    }
    res -= m;
    for (int i = 0; i < n && res; i++){
        if (out[i]){
            if (res >= out[i]){
                res -= out[i];
                out[i] = 0;
            } 
            else{
                out[i] -= res;
                res = 0;
            }
        }
    }
    for (auto it:out) cout << it << " ";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}