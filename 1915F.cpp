#include <bits/stdc++.h>
#define maxarray 200005
#define endl '\n'
#define int long long
 
using namespace std;
int bit[maxarray];
 
void update(int n, int pos, int val){
    for ( ; pos <= n; pos += (pos&(-pos))) bit[pos] += val;
}
int get(int pos){
    int out = 0;
    for ( ; pos > 0; pos -= (pos&(-pos))) out += bit[pos];
    return out;
}
bool comp(pair<pair<int, int>, int> &a, pair<pair<int, int>, int> &b){
    if (a.first.first == b.first.first) return a.first.second > b.first.second;
    else return a.first.first < b.first.first;
}

void solve(){
    int n; cin >> n;
    set <int> st;
    vector <pair<pair<int, int>, int>> inp(n);
    for (int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        inp[i].first = {x, y};
        inp[i].second = i;
        st.insert(y);
    }
    sort(inp.begin(), inp.end(), comp);
    map <int, int> mp; int rank = 0;
    for (auto &it:st) mp[it] = ++rank;
    int answer = 0;
    fill(bit, bit + maxarray, 0);
    update(rank, mp[inp[n-1].first.second], 1);
    for (int i = n-2; i >= 0; i--){
        answer += get(mp[inp[i].first.second]);
        update(rank, mp[inp[i].first.second], 1);
    }
    cout << answer << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        solve();
    }
    return 0;
}