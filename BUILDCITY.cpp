#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int n; int64_t answer = 0;
int par[maxarray], big[maxarray];
vector <pair<int, pair<int, int>>> edge;

void initmst(){
    for (int v = 1; v <= n; v++){
        par[v] = v; big[v] = 1;
    }
}
int find_set(int v){
    return (v == par[v])?(v):(par[v] = find_set(par[v]));
}
void union_set(int u, int v, int w){
    int a = find_set(u);
    int b = find_set(v);
    if (a != b){
        if (big[a] < big[b]) swap(a, b);
        par[b] = a;
        big[a] += big[b];
        answer += w;
    }
}
void MST(){
    initmst();
    sort(edge.begin(), edge.end());
    for (auto &it:edge){
        int u = it.second.first, v = it.second.second, w = it.first;
        union_set(u, v, w);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    if (n <= 1000){
        vector <pair<int, int>> inp(n);
        for (int i = 0; i < n; i++){
            cin >> inp[i].first >> inp[i].second;
        }
        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                int temp = min(abs(inp[i].first - inp[j].first), abs(inp[i].second - inp[j].second));
                edge.push_back({temp, {i+1, j+1}});
            }
        }
        MST();
        cout << answer << '\n';
    }
    return 0;
}