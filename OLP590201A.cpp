#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
struct Origin{
    int64_t l, r; 
    int type;
};
int answer[maxarray];
int st[4*maxarray], lazy[4*maxarray];
Origin scan[2*maxarray];

bool comp(Origin &a, Origin &b){
    return (a.l < b.l || (a.l == b.l && a.type < b.type));
}
int64_t get_intersection_point(double a, double b, double c, double d, double y, bool start){
    double nx = b - d;
    double ny = c - a;
    double x = ((nx*a + ny*b) - ny*y)/nx;
    if (start) return int64_t((x == ceil(x))?(x + 1):(ceil(x)));
    else return int64_t((x == floor(x))?(x - 1):(floor(x)));
}
void down(int id, int l, int r){
    if (lazy[id] == 0) return;
    st[id] += (r-l+1)*lazy[id];
    if (l != r){
        lazy[2*id] += lazy[id];
        lazy[2*id+1] += lazy[id];
    }
    lazy[id] = 0;
}
void update(int id, int l, int r, int u, int v, int val){
    down(id, l, r);
    if (v < l || u > r) return;
    if (u <= l && r <= v){
        lazy[id] += val;
        down(id, l, r);
        return;
    }
    int mid = (l + r)/2;
    update(2*id, l, mid, u, v, val);
    update(2*id+1, mid+1, r, u, v, val);
    st[id] = st[2*id] + st[2*id+1];
}
int get(int id, int l, int r, int u, int v){
    down(id, l, r);
    if (v < l || u > r) return 0;
    if (u <= l && r <= v) return st[id];
    int mid = (l + r)/2;
    int a = get(2*id, l, mid, u, v);
    int b = get(2*id+1, mid+1, r, u, v);
    return (a + b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int64_t l, r, y; cin >> l >> r >> y;
    int thend = 0; set <int64_t> st;
    for (int i = 0; i < n; i++){
        int x, v, h; cin >> x >> v >> h;
        int64_t a = get_intersection_point(x, 0, x-h, 0+v, y, true);
        int64_t b = get_intersection_point(x, 0, x+h, 0+v, y, false);
        a = max(a, l); b = min(b, r);
        scan[++thend] = {a, b, 1};
        scan[++thend] = {b, a, -1};
        st.insert(a); st.insert(b);
    }
    scan[++thend] = {l, r, 1}; st.insert(l);
    scan[++thend] = {r, l, -1}; st.insert(r);
    sort(scan + 1, scan + thend+1, comp);
    for (int i = 1; i < thend; i++){
        int a = scan[i].l, b = scan[i+1].l;
        if (b-a-1 > 0){
            int mid = (a+b)/2;
            st.insert(mid);
        }
    }
    map <int64_t, int> mp; int rank = 0;
    for (auto &it:st) mp[it] = ++rank;
    for (int i = 1; i <= thend; i++){
        if (scan[i].type != 1) continue;
        update(1, 1, rank, mp[scan[i].l], mp[scan[i].r], 1);
    }
    map <int64_t, int> see;
    for (auto &it:st){
        int pos = mp[it];
        int calc = get(1, 1, rank, pos, pos);
        see[it] = calc;
    }
    for (int i = 1; i < thend; i++){
        int a = scan[i].l, b = scan[i+1].l;
        if (a == b){
            continue;
        }
        int mid = (a + b)/2;
        answer[see[mid]] += max(b-a-1, 0);
        answer[see[a]]++;
        // for (int i = 1; i <= n; i++) cout << answer[i] << " "; cout << endl; 
    }
    answer[see[scan[thend].l]]++;
    for (int i = 1; i <= n; i++){
        answer[i] += answer[i-1];
        cout << answer[i] << '\n';
    }
    cout << (r - l + 1);
    return 0;
}