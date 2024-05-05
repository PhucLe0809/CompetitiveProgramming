#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <int> parent(maxarray), big(maxarray), value(maxarray), sum(maxarray), mini(maxarray);

void make_set(int v){
    parent[v] = v;
    big[v] = 0;
    sum[v] = value[v];
    mini[v] = value[v];
}
int find_set(int v){
    return (v == parent[v])?(v):(parent[v] = find_set(parent[v]));
}
void union_set(int u, int v){
    u = find_set(u);
    v = find_set(v);
    if (u != v){
        if (big[u] < big[v]) swap(u, v);
        parent[v] = u;
        big[u] += big[v];
        sum[u] += sum[v];
        mini[u] = min(mini[v], mini[v]);
    }
}
int find_sum(int v){
    v = find_set(v);
    return sum[v];
}
int find_mini(int v){
    v = find_set(v);
    return mini[v];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    int type, x, y;
    while (q--){
        cin >> type >> x >> y;
        if (type == 1){
            union_set(x, y);
        }else{
            x = find_set(x);
            y = find_set(y);
            if (x == y) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}