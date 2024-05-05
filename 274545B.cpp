#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int st[4*maxarray];

void build(int id, int l, int r){
    if (l == r){
        st[id] = 1; return;
    }
    int mid = l + r >> 1;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    st[id] = st[2*id] + st[2*id+1];
}
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
int get(int id, int l, int r, int val, int &res){
    if (l == r) return r;
    int mid = l + r >> 1;
    if ((st[2*id+1]+res >= val)){
        return get(2*id+1, mid+1, r, val, res);
    }else{
        res += st[2*id+1];
        return get(2*id, l, mid, val, res);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n), answer(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    build(1, 1, n);
    for (int i = n-1; i >= 0; i--){
        int res = 0;
        int k = get(1, 1, n, ++inp[i], res);
        answer[i] = k;
        update(1, 1, n, k, 0);
    }
    for (auto &it:answer) cout << it << " ";
    return 0;
}