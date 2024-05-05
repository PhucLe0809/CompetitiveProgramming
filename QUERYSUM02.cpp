#include <bits/stdc++.h>

using namespace std;
struct BIT{
    vector <int64_t> inp, diff, pre, one, two;
    BIT (int n) : inp(n), diff(n), pre(n), one(n), two(n) {};

    void build(int l, int r){
        for (int i = l; i <= r; i++){
            pre[i] = pre[i-1] + ((r-i+1)*(inp[i] - inp[i-1]));
            diff[i] = diff[i-1] + (inp[i] - inp[i-1]);
        }
        for (int i = l; i <= r; i++){
            one[i] = pre[i] - pre[i - (i&(-i))];
            two[i] = diff[i] - diff[i - (i&(-i))];
        }
    }
    void update_point(vector <int64_t> &bit, int l, int r, int pos, int64_t val){
        int id = pos;
        while (id <= r){
            bit[id] += val;
            id += (id & (-id));
        }
    }
    void update_range(int l, int r, int u, int v, int64_t val){
        update_point(one, l, r, u, (r - u + 1)*val);
        update_point(one, l, r, v+1, -(r - (v+1) + 1)*val);
        update_point(two, l, r, u, val);
        update_point(two, l, r, v+1, -val);
    }
    int64_t sum_bit(vector <int64_t> &bit, int l, int r, int pos){
        int id = pos; int64_t out = 0;
        while (id >= l){
            out += bit[id];
            id -= (id & (-id));
        }
        return out;
    }
    int64_t sum_prefix(int l, int r, int pos){
        return sum_bit(one, l, r, pos) - (r - pos)*sum_bit(two, l, r, pos);
    }
    int64_t sum_range(int l, int r, int u, int v){
        return sum_prefix(l, r, v) - sum_prefix(l, r, u-1);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    BIT tree(n+5);
    for (int i = 1; i <= n; i++) cin >> tree.inp[i];
    tree.build(1, n);
    int t, x, y; int64_t k;
    while (q--){
        cin >> t >> x >> y;
        if (t == 1){
            cin >> k; tree.update_range(1, n, x, y, k);
        }
        if (t == 2){
            cout << tree.sum_range(1, n, x, y) << '\n';
        }
    }
    return 0;
}