#include <bits/stdc++.h>
#define maxarray 200005
#define inf 1000000007

using namespace std;
int inp[maxarray], st[4*maxarray];

void build(int id, int l, int r){
    if (l == r){
        st[id] = inp[l];
        return;
    }
    int mid = l + r >> 1;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    st[id] = max(st[2*id], st[2*id+1]);
}
void update(int id, int l, int r, int pos, int value){
    if (pos < l || pos > r) return;
    if (l == r){
        st[id] = value; return;
    }
    int mid = l + r >> 1;
    update(2*id, l, mid, pos, value);
    update(2*id+1, mid+1, r, pos, value);
    st[id] = max(st[2*id], st[2*id+1]);
}
int get(int id, int l, int r, int u, int v){
    if (v < l || u > r) return -inf;
    if (u <= l && r <= v){
        return st[id];
    }
    int mid = l + r >> 1;
    int a = get(2*id, l, mid, u, v);
    int b = get(2*id+1, mid+1, r, u, v);
    return max(a, b);
}
int query(int l, int r, int n, int value){
    int pos = 0;
    while (l <= r){
        int mid = l + r >> 1;
        if (get(1, 1, n, 1, mid) >= value){
            pos = mid; r = mid - 1;
        }else l = mid + 1;
    }
    return pos;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> inp[i];
    }
    build(1, 1, n);
    int x;
    vector <int> answer;
    while (m--){
        cin >> x;
        int pos = query(1, n, n, x);
        answer.push_back(pos);
        inp[pos] -= x;
        update(1, 1, n, pos, inp[pos]);
    }
    for (auto &it:answer) cout << it << " ";
    return 0;
}