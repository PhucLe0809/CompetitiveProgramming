#include <bits/stdc++.h>
#define maxarray 30005
#define query 200005
#define limit 1000005

using namespace std;
int n;
struct node{
    int val, id, type;
    node() : val(0), id(0), type(0) {};
};
node inp[maxarray+query];
int last[limit] = {0};
int bit[maxarray] = {0};

void update(int pos, int x){
    while (pos <= n){
        bit[pos] += x;
        pos += (pos&(-pos));
    }
}
int get(int pos){
    int out = 0;
    while (pos > 0){
        out += bit[pos];
        pos -= (pos&(-pos));
    }
    return out;
}
bool comp(node a, node b){
    if (a.id != b.id) return a.id < b.id;
    else return a.type < b.type;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int  i = 1; i <= n; i++){
        cin >> inp[i].val;
        inp[i].id = i;
        inp[i].type = -1;
    }
    int q; cin >> q;
    for (int i = n+1; i <= n+q; i++){
        cin >> inp[i].val >> inp[i].id;
        inp[i].type = i-n-1;
    }
    sort(inp + 1, inp + n+q+1, comp);
    vector <int> answer(q);
    for (int i = 1; i <= n+q; i++){
        if (inp[i].type == -1){
            update(inp[i].id, 1);
            if (last[inp[i].val] != 0) update(last[inp[i].val], -1);
            last[inp[i].val] = inp[i].id;
        }else{
            answer[inp[i].type] = get(inp[i].id) - get(inp[i].val-1);
        }
    }
    for (auto &it:answer) cout << it << '\n';
    return 0;
}