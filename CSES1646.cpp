#include <bits/stdc++.h>

using namespace std;
struct BIT{
    vector <int64_t> bit;

    BIT (int n) : bit(n){};

    void update(int n, int pos, int value){
        while (pos <= n){
            bit[pos] += value;
            pos += (pos&(-pos));
        }
    }
    int64_t get(int n, int pos){
        int64_t out = 0;
        while (pos >= 1){
            out += bit[pos];
            pos -= (pos&(-pos));
        }
        return out;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    BIT tree(n+5);
    int x;
    for (int i = 1; i <= n; i++){
        cin >> x;
        tree.update(n, i, x);
    }
    int l, r;
    while (q--){
        cin >> l >> r;
        cout << tree.get(n, r) - tree.get(n, l-1) << '\n';
    }
    return 0;
}