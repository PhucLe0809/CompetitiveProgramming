// #pragma GCC target ("avx2")
// #pragma GCC optimize ("03")
// #pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
struct SEG{
    vector <int> st;

    SEG (int n) : st(4*n) {};

    void update(int id, int l, int r, int x, int v){
        if (x < l || x > r) return;
        if (l == r){
            st[id] = v; 
            return;
        }
        int mid = (l + r) / 2;
        update(2*id, l, mid, x, v);
        update(2*id+1, mid+1, r, x, v);
        st[id] = max(st[2*id], st[2*id+1]);
    }
    int get(int id, int l, int r, int u, int v){
        if (v < l || u > r) return LONG_MIN;
        if (u <= l && r <= v) return st[id];
        int mid = (l + r) / 2;
        int a = get(2*id, l, mid, u, v);
        int b = get(2*id+1, mid+1, r, u, v);
        return max(a, b);
    }
};

void GOTOHANOI(){
    int n, k; cin >> n >> k;
    SEG tree(n+5);
    vector <int> inp(n+1);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    int answer = max(inp[n], 0LL);
    tree.update(1, 1, n, n, answer);
    for (int i = n-1; i >= 1; i--){
        int u = i + 1;
        int v = min(i + k, n);
        int val = inp[i] + tree.get(1, 1, n, u, v);
        answer = max(answer, val);
        tree.update(1, 1, n, i, max(val, 0LL));
    }
    cout << answer << endl;
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