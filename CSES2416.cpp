#include <bits/stdc++.h>
#define maxarray 200005
#define inf 1000000000000000007

using namespace std;
int64_t x[maxarray], prefix[maxarray], contribute[maxarray], answer[maxarray];
vector <pair<int, int>> query[maxarray];
int64_t bit[maxarray];

void update(int n, int pos, int64_t value){
    for ( ; pos <= n; pos += (pos&(-pos))) bit[pos] += value;
}
int64_t get(int a, int b){
    int64_t out = 0;
    for ( ; b; b -= (b&(-b))) out += bit[b];
    a--;
    for ( ; a; a -= (a&(-a))) out -= bit[a];
    return out;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++){
        cin >> x[i];
        prefix[i] = prefix[i-1] + x[i];
    }
    x[n+1] = inf;
    prefix[n+1] = prefix[n] + x[n+1];
    for (int i = 1; i <= q; i++){
        int a, b; cin >> a >> b;
        query[a].push_back({b, i});
    }
    deque <int> sta;
    for (int i = n; i > 0; i--){
        while (!sta.empty() && x[i] >= x[sta.front()]){
            update(n, sta.front(), -contribute[sta.front()]);
            sta.pop_front();
        }
        if (!sta.empty()){
            contribute[i] = (sta.front()-1 - i)*x[i] - (prefix[sta.front()-1] - prefix[i]);
        }
        update(n, i, contribute[i]);
        sta.push_front(i);
        for (auto &it:query[i]){
            int pos = upper_bound(sta.begin(), sta.end(), it.first) - sta.begin() - 1;
            answer[it.second] = (pos)?get(i, sta[pos]-1):0;
            answer[it.second] += (it.first - sta[pos])*x[sta[pos]] - (prefix[it.first] - prefix[sta[pos]]);
            // cout << it.second << " " << pos << " " << sta[pos] << endl;
        }
    }
    for (int i = 1; i <= q; i++) cout << answer[i] << '\n';
    return 0;
}