#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int height[maxarray], beauti[maxarray];
int64_t dp[maxarray], st[4*maxarray];

void update(int id, int l, int r, int x, int64_t val){
    if (l > x || r < x) return;
    if (l == r){
        st[id] = val; return;
    }
    int mid = l + r >> 1;
    update(2*id, l, mid, x, val);
    update(2*id+1, mid+1, r, x, val);
    st[id] = max(st[2*id], st[2*id+1]);
}
int64_t query(int id, int l, int r, int u, int v){
    if (l > v || r < u) return 0;
    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    return max(query(2*id, l, mid, u, v), query(2*id+1, mid+1, r, u, v));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> height[i];
    for (int i = 1; i <= n; i++) cin >> beauti[i];
    memset(st, 0, sizeof(st));
    dp[1] = beauti[1]; 
    update(1, 1, maxarray-1, height[1], dp[1]);
    int64_t answer = dp[1];
    int64_t temp;
    for (int i = 2; i <= n; i++){
        temp = query(1, 1, maxarray-1, 1, height[i]);
        dp[i] = temp + beauti[i];
        update(1, 1, maxarray-1, height[i], dp[i]);
        answer = max(answer, dp[i]);
    }
    cout << answer;
    return 0;
}