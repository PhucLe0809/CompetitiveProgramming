#include <bits/stdc++.h>

using namespace std;
struct BIT{
    vector <int64_t> inp, diff, one;
    BIT (int n) : inp(n), diff(n), one(n) {};

    void build(int l, int r){
        for (int i = l; i <= r; i++){
            diff[i] = diff[i-1] + (inp[i] - inp[i-1]);
            one[i] = diff[i] - diff[i - (i&(-i))];
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
        update_point(one, l, r, u, val);
        update_point(one, l, r, v+1, -val);
    }
    int64_t sum_bit(vector <int64_t> &bit, int l, int r, int pos){
        int id = pos; int64_t out = 0;
        while (id >= l){
            out += bit[id];
            id -= (id & (-id));
        }
        return out;
    }
    int64_t get_point(int l, int r, int pos){
        return sum_bit(one, l, r, pos);
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
        cin >> t >> x;
        if (t == 1){
            cin >> y >> k; tree.update_range(1, n, x, y, k);
        }
        if (t == 2){
            cout << tree.get_point(1, n, x) << '\n';
        }
    }
    return 0;
}