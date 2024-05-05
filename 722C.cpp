#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <int64_t> inp(maxarray), per(maxarray);
vector <bool> flag(maxarray);
struct DSU{
    vector <int64_t> parent, big, sum;
    DSU(int n) : parent(n), big(n), sum(n) {};

    void make_set(int v){
        parent[v] = v;
        big[v] = 1;
        sum[v] = inp[v];
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
        }
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    for (int i = 1; i <= n; i++) cin >> per[i];
    DSU graph(n+5);
    for (int i = 1; i <= n; i++) graph.make_set(i);
    int64_t answer = 0;
    vector <int64_t> out(1, 0);
    for (int i = n; i > 1; i--){
        flag[per[i]] = true;
        if (per[i]>1 && flag[per[i]-1]) graph.union_set(per[i], per[i]-1);
        if (per[i]<n && flag[per[i]+1]) graph.union_set(per[i], per[i]+1);
        answer = max(answer, graph.sum[graph.find_set(per[i])]);
        out.push_back(answer);
    }
    reverse(out.begin(), out.end());
    for (auto &it:out) cout << it << '\n';
    return 0;
}