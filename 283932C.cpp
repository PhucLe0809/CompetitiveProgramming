#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_good(int &n, int &x, int &y, int mid){
    mid -= min(x, y);
    if (mid < 0) return false;
    return mid/x + mid/y + 1 >= n;
}
void GOTOHANOI(){
    int n, x, y; cin >> n >> x >> y;
    int l = 0, r = 2e9;
    while (l < r){
        int mid = (l + r) / 2;
        if (!is_good(n, x, y, mid)) l = mid + 1;
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