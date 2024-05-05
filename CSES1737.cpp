#include <bits/stdc++.h>
#define endl '\n'
#define maxarray 200005
#define inf 1000000007
// Persistent Data Structures
using namespace std;
int cur = 1, n, q;
struct Node{
    int left, right;
    int64_t sum;
} st[maxarray*40];

void update(int &id, int pos, int value, int l = 0, int r = n-1){
    st[cur].left = st[id].left;
    st[cur].right = st[id].right;
    st[cur].sum = st[id].sum + value;
    // st[cur].maxx = max(st[st[cur].left].maxx, st[st[cur].right].maxx);
    id = cur; cur++;
    if (l == r) return;
    int mid = (l + r)/2;
    if (pos <= mid) update(st[id].left, pos, value, l, mid);
    else update(st[id].right, pos, value, mid+1, r);
}
int64_t query(int id, int u, int v, int l = 0, int r = n-1){
    if (u <= l && r <= v) return st[id].sum;
    int mid = (l + r)/2;
    return ((u <= mid ? query(st[id].left, u, v, l, mid) : 0) 
            + (mid < v ? query(st[id].right, u, v, mid+1, r) : 0));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> q;
    vector <int> ver(1);
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        update(ver[0], i, x);
    }
    while (q--){
        int type; cin >> type;
        if (type == 1){
            int k, a, x; cin >> k >> a >> x; 
            k--; a--;
            update(ver[k], a, x - query(ver[k], a, a));
        }
        if (type == 2){
            int k, a, b; cin >> k >> a >> b; 
            k--; a--; b--;
            cout << query(ver[k], a, b) << endl;
        }
        if (type == 3){
            int k; cin >> k;
            ver.push_back(ver[k - 1]);
        }
    }
    return 0;
}