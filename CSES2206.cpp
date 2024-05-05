#include <bits/stdc++.h>
#define maxarray 200005
#define inf 1000000007

using namespace std;
int val[maxarray];
int stdown[4*maxarray], stup[4*maxarray];

void build_down(int id, int l, int r){
    if (l == r){
        stdown[id] = val[l] - l;
        return;
    }
    int mid = l + r >> 1;
    build_down(2*id, l, mid);
    build_down(2*id+1, mid+1, r);
    stdown[id] = min(stdown[2*id], stdown[2*id+1]);
}
void build_up(int id, int l, int r){
    if (l == r){
        stup[id] = val[l] + l;
        return;
    }
    int mid = l + r >> 1;
    build_up(2*id, l, mid);
    build_up(2*id+1, mid+1, r);
    stup[id] = min(stup[2*id], stup[2*id+1]);
}
void downto(int id, int l, int r, int pos){
    if (pos < l || pos > r) return;
    if (l == r){
        stdown[id] = val[l] - l;
        return;
    }
    int mid = l + r >> 1;
    downto(2*id, l, mid, pos);
    downto(2*id+1, mid+1, r, pos);
    stdown[id] = min(stdown[2*id], stdown[2*id+1]);
}
void upto(int id, int l, int r, int pos){
    if (pos < l || pos > r) return;
    if (l == r){
        stup[id] = val[l] + l;
        return;
    }
    int mid = l + r >> 1;
    upto(2*id, l, mid, pos);
    upto(2*id+1, mid+1, r, pos);
    stup[id] = min(stup[2*id], stup[2*id+1]);
}
int get_down(int id, int l, int r, int u, int v){
    if (v < l || u > r) return inf;
    if (u <= l && r <= v){
        return stdown[id];
    }
    int mid = l + r >> 1;
    int a = get_down(2*id, l, mid, u, v);
    int b = get_down(2*id+1, mid+1, r, u, v);
    return min(a, b);
}
int get_up(int id, int l, int r, int u, int v){
    if (v < l || u > r) return inf;
    if (u <= l && r <= v){
        return stup[id];
    }
    int mid = l + r >> 1;
    int a = get_up(2*id, l, mid, u, v);
    int b = get_up(2*id+1, mid+1, r, u, v);
    return min(a, b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> val[i];
    build_down(1, 1, n);
    build_up(1, 1, n);
    int t, l, r;
    while (q--){
        cin >> t;
        if (t == 1){
            cin >> l >> r;
            val[l] = r;
            downto(1, 1, n, l);
            upto(1, 1, n, l);
        }
        if (t == 2){
            cin >> l;
            int left = get_down(1, 1, n, 1, l-1);
            int right = get_up(1, 1, n, l+1, n);
            cout << min({left + l, right - l, val[l]}) << '\n';
        }
    }
    return 0;
}