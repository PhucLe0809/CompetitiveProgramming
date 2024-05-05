#include <bits/stdc++.h>
#define maxarray 100005
#define maxvalue 2000005
#define upto 1000000

using namespace std;
struct Origin{
    int x, l, r, type;
};
struct Segment{
    int cnt; int64_t len;
};
Origin inp[2*maxarray];
Segment st[4*maxvalue];

bool comp(Origin &a, Origin &b){
    return (a.x < b.x || (a.x == b.x && a.type < b.type));
}
void update(int id, int l, int r, int u, int v, int type){
    if (v < l || u > r || l > r) return;
    if (u <= l && r <= v){
        st[id].cnt += type;
        if (type == 1){
            st[id].len = (r - l + 1);
        }else if (st[id].cnt == 0){
            if (l < r){
                st[id].len = st[2*id].len + st[2*id+1].len;
            }else st[id].len = 0;
        }
        return;
    }
    int mid = (l + r)/2;
    update(2*id, l, mid, u, v, type);
    update(2*id+1, mid+1, r, u, v, type);
    if (st[id].cnt == 0 && l < r){
        st[id].len = st[2*id].len + st[2*id+1].len;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int limit = 0, thend = 0;
    for (int i = 1; i <= n; i++){
        int x1, y1; cin >> x1 >> y1;
        int x2, y2; cin >> x2 >> y2;
        inp[++thend] = {x1 + upto, y1+1 + upto, y2 + upto, 1};
        inp[++thend] = {x2 + upto, y1+1 + upto, y2 + upto, -1};
        limit = max(limit, y2 + upto);
    }
    sort(inp, inp + thend+1, comp);
    int64_t answer = 0;
    for (int i = 1; i <= thend; i++){
        answer += st[1].len*(inp[i].x - inp[i-1].x);
        update(1, 1, limit, inp[i].l, inp[i].r, inp[i].type);
        // cout << answer << " ";
    }
    cout << answer;
    return 0;
}