#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int st[4*maxarray];

void update(int id, int l, int r, int x, int val){
    if (x < l || x > r) return;
    if (l == r){
        st[id] = val; return;
    }
    int mid = l + r >> 1;
    update(2*id, l, mid, x, val);
    update(2*id+1, mid+1, r, x, val);
    st[id] = st[2*id] + st[2*id+1];
}
int get(int id, int l, int r, int u, int v){
    if (v < l || u > r) return 0;
    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    int a = get(2*id, l, mid, u, v);
    int b = get(2*id+1, mid+1, r, u, v);
    return (a + b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> answer(n, 0);
    int x;
    memset(st, 0, sizeof(st));
    for (int i = 0; i < n; i++){
        cin >> x;
        answer[i] = get(1, 1, n, x, n);
        update(1, 1, n, x, 1);
    }
    for (auto &it:answer) cout << it << " ";
    return 0;
}