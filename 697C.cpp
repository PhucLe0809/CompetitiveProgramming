#include <bits/stdc++.h>

using namespace std;
map <int64_t, int64_t> mp;

int depth(int64_t u){
    int cnt = 0;
    while (u != 0){
        cnt++; u /= 2;
    }
    return --cnt;
}
void update(int64_t u, int64_t v, int64_t w){
    int hu = depth(u);
    int hv = depth(v);
    if (hu != hv){
        if (hu < hv){
            swap(hu, hv); swap(u, v);
        }
        int k = hu - hv;
        while (k--){
            mp[u] += w; u /= 2;
        }
    }
    if (u == v) return;
    while (u != v){
        mp[u] += w; mp[v] += w;
        u /= 2; v /= 2;
    }
    // mp[u] += w;
    return;
}
int64_t query(int64_t u, int64_t v){
    int64_t answer = 0;
    int hu = depth(u);
    int hv = depth(v);
    if (hu != hv){
        if (hu < hv){
            swap(hu, hv); swap(u, v);
        }
        int k = hu - hv;
        while (k--){
            answer += mp[u]; u /= 2;
        }
    }
    if (u == v) return answer;
    while (u != v){
        answer += mp[u]; answer += mp[v];
        u /= 2; v /= 2;
    }
    // answer += mp[u];
    return answer;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int q; cin >> q;
    int64_t t, u, v, w;
    while (q--){
        cin >> t;
        if (t == 1){
            cin >> u >> v >> w;
            update(u, v, w);
        }
        if (t == 2){
            cin >> u >> v;
            cout << query(u, v) << '\n';
        }
    }
    return 0;
}