#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <int> parent(maxarray), big(maxarray), maxi(maxarray);

void make_set(int v){
    parent[v] = v;
    big[v] = 1;
    maxi[v] = v;
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
        maxi[u] = max(maxi[u], maxi[v]);
    }
}
int find_maxi(int v){
    v = find_set(v);
    return maxi[v];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) make_set(i);
    int type, x;
    while (q--){
        cin >> type >> x;
        if (type == 1) union_set(x, x+1);
        else cout << find_maxi(x+1) << '\n';
    }
    return 0;
}