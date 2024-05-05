#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
vector <int64_t> fre(maxarray), sub(maxarray);

void update(vector <int64_t> &bit, int n, int pos, int val){
    while (pos <= n){
        bit[pos] += val;
        pos += (pos&(-pos));
    }
}
int64_t query(vector <int64_t> &bit, int pos){
    int64_t out = 0;
    while (pos > 0){
        out += bit[pos];
        pos -= (pos&(-pos));
    }
    return out;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <pair<int, int>> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i].first;
    for (int i = 0; i < n; i++) cin >> inp[i].second;
    set <int> st;
    for (int i = 0; i < n; i++) st.insert(inp[i].second);
    map <int, int> mp; int node = 0;
    for (auto &x:st) mp[x] = ++node;
    int64_t answer = 0;
    sort(inp.begin(), inp.end());
    for (int i = 0; i < n; i++){
        int pos = mp[inp[i].second];
        int64_t cnt = query(fre, pos);
        int64_t sum = query(sub, pos);
        answer += cnt*inp[i].first - sum;
        update(fre, node, pos, 1);
        update(sub, node, pos, inp[i].first);
    }
    cout << answer;
    return 0;
}