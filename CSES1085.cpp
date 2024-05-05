#include <bits/stdc++.h>

using namespace std;

bool is_possible(vector <int> &inp, int64_t &maxx, int &k){
    int cnt = 0;
    int64_t sum = 0;
    for (auto &it:inp){
        if (it > maxx) return false;
        if (sum + it > maxx){
            cnt++; sum = 0;
        }
        sum += it;
    }
    if (sum > 0) cnt++;
    return (cnt <= k);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    int64_t l = 0, r = 2e5 * 1e9;
    while (l <= r){
        int64_t mid = (l + r)/2;
        if (is_possible(inp, mid, k)){
            r = mid-1;
        }else l = mid+1;
    }
    cout << l;
    return 0;
}