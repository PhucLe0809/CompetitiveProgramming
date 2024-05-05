#include <bits/stdc++.h>
#define maxarray 30005
#define block 600
#define limit 10005

using namespace std;
int n;
int val[maxarray];
int maxx[maxarray/block + 2] = {0};
struct BIT{
    int bit[limit];

    void update_point(int pos, int x){
        while (pos < limit){
            bit[pos] += x;
            pos += (pos&(-pos));
        }
    }
    int get(int pos){
        int out = 0;
        while (pos > 0){
            out += bit[pos];
            pos -= (pos&(-pos));
        }
        return out;
    }
} tree[maxarray/block + 2];

void preprocess(){
    for (int i = 0; i < n; i++){
        tree[i/block].update_point(val[i], 1);
        maxx[i/block] = max(maxx[i/block], val[i]);
    }
}
void update(int pos, int x){
    tree[pos/block].update_point(val[pos], -1);
    val[pos] = x;
    maxx[pos/block] = max(maxx[pos/block], x);
    tree[pos/block].update_point(val[pos], 1);
}
int query(int l, int r, int k){
    int bleft = (l + block - 1)/block;
    int bright = r/block;
    int cnt = 0;
    if (bleft >= bright){
        for (int i = l; i <= r; i++) cnt += (val[i] > k);
        return cnt;
    }
    for (int i = bleft; i < bright; i++){
        cnt += tree[i].get(maxx[i]) - tree[i].get(k);
    }
    for (int i = l; i < bleft*block; i++) cnt += (val[i] > k);
    for (int i = bright*block; i <= r; i++) cnt += (val[i] > k);
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> val[i];
    preprocess();
    int q; cin >> q;
    int t, l, r, k;
    while (q--){
        cin >> t;
        if (t == 0){
            cin >> l >> k;
            update(--l, k);
        }
        if (t == 1){
            cin >> l >> r >> k;
            cout << query(--l, --r, k) << '\n';
        }
    }
    return 0;
}