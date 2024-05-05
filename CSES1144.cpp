#include <bits/stdc++.h>
#define maxarray 400005

using namespace std;
int inp[maxarray], bit[maxarray];
vector <int> scan;
struct Query{
    char type; int l, r;
};

void update(int pos, int value){
    for ( ; pos < maxarray; pos += (pos&(-pos))) bit[pos] += value;
}
int get(int pos){
    int out = 0;
    for ( ; pos > 0; pos -= (pos&(-pos))) out += bit[pos];
    return out;
}
int get_rank(int ele){
    return (upper_bound(scan.begin(), scan.end(), ele) - scan.begin());
}
void add(int ele, int value){
    int rank = get_rank(ele);
    update(rank, value);
}
int query(int ele){
    int rank = get_rank(ele);
    return get(rank);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++){
        cin >> inp[i];
        scan.push_back(inp[i]);
    }
    vector <Query> out;
    char t; int l, r;
    for (int i = 1; i <= q; i++){
        cin >> t >> l >> r;
        out.push_back({t, l, r});
        if (t == '!') scan.push_back(r);
    }
    sort(scan.begin(), scan.end());
    scan.erase(unique(scan.begin(), scan.end()), scan.end());
    for (int i = 1; i <= n; i++) add(inp[i], 1);
    for (auto &it:out){
        t = it.type; l = it.l; r = it.r;
        if (t == '!'){
            add(inp[l], -1);
            inp[l] = r;
            add(inp[l], 1);
        }
        if (t == '?'){
            cout << query(r) - query(--l) << '\n';
        }
    }
    return 0;
}