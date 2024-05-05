#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_good(int &x, int &w, int &h, int &n){
    return (x / w) * (x / h) >= n;
}
void GOTOHANOI(){
    int w, h, n; cin >> w >> h >> n;
    int l = 0, r = 1;
    while (!is_good(r, w, h, n)) r *= 2;
    while (l < r){
        int mid = (l + r) / 2;
        if (!is_good(mid, w, h, n)) l = mid + 1;
        else r = mid;
    }
    cout << l << endl;
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