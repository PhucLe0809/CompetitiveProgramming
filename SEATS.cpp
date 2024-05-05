// #pragma GCC optimize("Ofast")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define maxarray 100005
#define endl '\n'

using namespace std;
int n, q, m;
struct seat_node{
    int distance, coor;
    int pulp_left, pulp_righ;
    int id_left, id_righ;
        
    seat_node(int dis, int cor, int lef, int rgh, int ilef, int irgh, bool flag){
        this->distance = dis;
        this->coor = cor;
        this->pulp_left = lef;
        this->pulp_righ = rgh;
        this->id_left = ilef;
        this->id_righ = irgh;

        if (!flag) return;

        int len = rgh - lef;
        len -= (lef == 0 ? n : 0);
        if (lef != 0 && rgh != 2*n){
            distance = len / 2;
            coor = lef + distance;
        }
        if (lef == 0 && rgh == 2*n){
            distance = n;
            coor = n;
        }
        if (lef == 0 && rgh != 2*n){
            distance = len;
            coor = n;
        }
        if (lef != 0 && rgh == 2*n){
            distance = len - 1;
            coor = 2*n - 1;
        }
    }

    static seat_node base(){
        return seat_node(-1, LLONG_MAX, LLONG_MAX, LLONG_MAX, -1, -1, false);
    }
    static seat_node newnode(int dis, int cor, int lef, int rgh, int ilef, int irgh){
        return seat_node(dis, cor, lef, rgh, ilef, irgh, false);
    }
    static seat_node compare(const seat_node& a, const seat_node& b){
        if (a.distance > b.distance) return a;
        if (a.distance < b.distance) return b;
        if (a.coor < b.coor) return a;
        else return b;
    }
    static seat_node merge(const seat_node& a, const seat_node& b){
        seat_node res(0, 0, a.pulp_left, b.pulp_righ, a.id_left, b.id_righ, true);
        return res;
    }
};
vector <seat_node> st(4*maxarray, seat_node::base());
vector <pair<int, int>> graph(maxarray, {-1, -1});

void update_point(int id, int l, int r, int x, seat_node node){
    if (x < l || x > r) return;
    if (l == r){
        st[id] = node;
        return;
    }
    int mid = l + (r - l) / 2;
    update_point(2*id, l, mid, x, node);
    update_point(2*id+1, mid+1, r, x, node);
    st[id] = seat_node::compare(st[2*id], st[2*id+1]);
}
void update(int id, int l, int r, int x, seat_node node){
    
    seat_node sleft(0, 0, node.pulp_left, node.coor, node.id_left, x, true);
    update_point(id, l, r, node.id_left, sleft);
    seat_node srigh(0, 0, node.coor, node.pulp_righ, x, node.id_righ, true);
    update_point(id, l, r, x, srigh);

    graph[x] = {node.id_left, node.id_righ};
    graph[node.id_left].second = x;
    graph[node.id_righ].first = x;
}
seat_node get(int id, int l, int r, int u, int v){
    if (v < l || u > r) return seat_node::base();
    if (u <= l && r <= v) return st[id];
    int mid = l + (r - l) / 2;
    seat_node a = get(2*id, l, mid, u, v);
    seat_node b = get(2*id+1, mid+1, r, u, v);
    return seat_node::compare(a, b);
}
void merge_pair(int x, int y){
    seat_node a = get(1, 1, m, x, x);
    seat_node b = get(1, 1, m, y, y);
    seat_node c = seat_node::merge(a, b);
    update_point(1, 1, m, x, c);
}
void freedom(int id, int l, int r, int x){ 

    int id_left = graph[x].first;
    int id_righ = graph[x].second;

    merge_pair(id_left, x);
    update_point(1, 1, m, x, seat_node::base());
    graph[x] = {-1, -1};
    graph[id_left].second = id_righ;
    graph[id_righ].first = id_left;
}

void GOTOHANOI(){

    cin >> n >> q; m = q + 2;
    update_point(1, 1, m, 1, seat_node::newnode(n, n, 0, 2*n, 1, 2));
    graph[1].second = 2;
    update_point(1, 1, m, 2, seat_node::newnode(-1, LLONG_MAX, 2*n, LLONG_MAX, 1, 2));
    graph[2].first = 1;

    int human = 2;
    for (int i = 0; i < q; i++){
        int t; cin >> t;
        if (t == 1){
            human++;
            seat_node node = get(1, 1, m, 1, m);
            cout << node.coor - n + 1 << endl;
            update(1, 1, m, human, node);
        }
        if (t == 2){
            int id; cin >> id; id += 2;
            freedom(1, 1, m, id);
        }
    } 
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }

    return 0;
}