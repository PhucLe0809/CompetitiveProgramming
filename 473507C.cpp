#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
struct Point{
    int x, y, id;
};
bool comp(const Point &a, const Point &b){
    if (a.x == b.x) return a.y < b.y;
    else return a.x < b.x;
}
int n; int64_t answer = 0;
int par[maxarray], big[maxarray];
vector <pair<int, pair<int, int>>> edges;

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
    sort(edges.begin(), edges.end());
    for (auto &it:edges){
        int u = it.second.first, v = it.second.second, w = it.first;
        union_set(u, v, w);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    vector <Point> start(n), thend(n);
    for (int i = 0; i < n; i++){
        cin >> start[i].x >> start[i].y;
        start[i].id = i+1;
        thend[i].x = start[i].y;
        thend[i].y = start[i].x;
        thend[i].id = i+1;
    }
    sort(start.begin(), start.end(), comp);
    for (int i = 1; i < n; i++){
        int temp = start[i].x - start[i-1].x;
        edges.push_back({temp, {start[i].id, start[i-1].id}});
    }
    sort(thend.begin(), thend.end(), comp);
    for (int i = 1; i < n; i++){
        int temp = thend[i].x - thend[i-1].x;
        edges.push_back({temp, {thend[i].id, thend[i-1].id}});
    }
    MST();
    cout << answer << '\n';
    return 0;
}