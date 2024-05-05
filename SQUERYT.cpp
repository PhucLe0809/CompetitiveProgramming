#include <bits/stdc++.h>
#define endl '\n'
#define maxarray 100005
#define inf 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    vector <int> scan(1, inp[0]);
    for (int i = 1; i < n; i++){
        scan.push_back(max(scan.back(), inp[i]));
    }
    while (q--){
        int l, r, x; cin >> l >> r >> x;
        l--; r--;
        int pos = -1;
        while (l <= r){
            int mid = (l + r) / 2;
            if (scan[mid] >= x) pos = mid, r = mid - 1;
            else l = mid + 1;
        }
        if (pos == -1) cout << pos << endl;
        else cout << scan[pos] << endl;
    }
    return 0;
}