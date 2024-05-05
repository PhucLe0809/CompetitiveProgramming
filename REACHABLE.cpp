#include <bits/stdc++.h>
#define maxarray 200005
#define inf 1e9

using namespace std;
int32_t minele[maxarray], child[maxarray]; 
int32_t parent[maxarray], height[maxarray];

void make_set(int32_t v){
    parent[v] = v;
    minele[v] = v;
    height[v] = 0;
    //Optimized by altitude
}

int32_t find_set(int32_t v){
    return (parent[v] == v) ? v:parent[v] = find_set(parent[v]);
    //If v vertix'father is v vertix then return v
    //In contrast, use the path compression solution 
}

void union_sets(int32_t u, int32_t v){
    int32_t a = find_set(u);
    int32_t b = find_set(v);
    if (a != b){
        if (height[a] < height[b]) swap(a, b);
        //Let the variable a be the root of the tree with greater height
        parent[b] = a;
        //A vertix'father is B vertix
        if (minele[a]!=a) minele[a] = min(minele[a], minele[b]);
        else minele[a] = minele[b];
        //Reassign the vertex with the lower index back to the root
        if (height[a] == height[b]) height[a]++;
        //If two trees have the same height, the height of the new tree after merging will increase by 1
    } else{
        //minele[a] = min(minele[a], minele[u]);
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 1; i <= n; i++) make_set(i);
    int32_t pos;
    for (int i = 1; i < n; i++){
        cin >> pos;
        union_sets(pos, i+1);
    }
    int32_t q; cin >> q;
    int32_t type, x, y;
    while (q--){
        cin >> type;
        if (type == 1){
            cin >> x >> y;
            union_sets(x, y);
        } else{
            cin >> x;
            cout << minele[x] << '\n';
        }
    }
    return 0;
}