#include <bits/stdc++.h>
#define endl '\n'
#define maxarray 100005
#define int long long
#define inf 1000000007

using namespace std;
int n, q;
int parent[maxarray], sz[maxarray], cnt[maxarray];
int num[maxarray], length[maxarray], nd[maxarray];
vector <int> tree[maxarray];
 
void dfs(int u, int p = -1){
    sz[u] = 1;
    parent[u] = p;
    for(int e = 0; e < tree[u].size(); e++){
        int v = tree[u][e];
        if(v == p) continue;
        dfs(v, u);
        sz[u] += sz[v];
        cnt[v] = sz[v] * (n - sz[v]) * 2;
        length[u] ^= length[v];
        num[u] ^= num[v];
    }
}
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n-1; i++) {
        int u, v, l; cin >> u >> v >> l;
        tree[u].push_back(v);
        tree[v].push_back(u);
        length[u] ^= l;
        length[v] ^= l;
        num[u] ^= i;
        num[v] ^= i;
    }
    dfs(1);
    int answer = 0;
    for(int i = 2; i <= n; i++) {
        answer += cnt[i] * length[i];
        nd[num[i]] = i;
    }
    double factor = 3. / ((double)n * (n-1));
    cin >> q;
    while(q--){
        int e, d; cin >> e >> d;
        int u = nd[e];
        answer += cnt[u] * (d - length[u]);
        length[u] = d;
        cout << fixed << setprecision(9) << (double)answer * factor << endl;
    }
    return 0;
}