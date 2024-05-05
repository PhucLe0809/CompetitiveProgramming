#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;

struct BIT{
    vector <int64_t> inp, bit;
    BIT (int n) : inp(n), bit(n) {};

    void build(int l, int r){
        vector <int64_t> prefix(r+1);
        for (int i = l; i <= r; i++){
            prefix[i] = prefix[i-1] + inp[i];
            bit[i] = prefix[i] - prefix[i - (i&(-i))];
        }
    }
    void update(int l, int r, int pos, int val){
        int id = pos;
        while (id <= r){
            bit[id] += val;
            id += (id&(-id));
        }
    }
    int64_t get(int l, int r, int pos){
        int id = pos; int64_t out = 0;
        while (id > 0){
            out += bit[id];
            id -= (id&(-id));
        }
        return out;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    BIT bitree(n+5);
    for (int i = 1; i <= n; i++) cin >> bitree.inp[i];
    bitree.build(1, n);
    cout << bitree.get(1, n, 5);
    return 0;
}