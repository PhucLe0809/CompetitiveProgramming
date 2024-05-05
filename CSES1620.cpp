#include <bits/stdc++.h>
#define inf 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, t; cin >> n >> t;
    vector <int> inp(n);
    int minn = inf;
    for (auto &it:inp){
        cin >> it; minn = min(minn, it);
    }
    int64_t l = 1, r = int64_t(minn)*t;
    int64_t cnt;
    while (l <= r){
        int64_t mid = (l + r)/2;
        cnt = 0;
        for (auto &it:inp) cnt += mid/it;
        if (cnt < t){
            l = mid + 1;
        }else r = mid - 1;
    }
    cout << l;
    return 0;
}