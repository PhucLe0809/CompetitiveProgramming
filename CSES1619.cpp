#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int bit[maxarray];

void update(int pos, int val){
    while (pos > 0){
        bit[pos] += val;
        pos -= (pos&(-pos));
    }
}
int get(int n, int pos){
    int out = 0;
    while (pos <= n){
        out += bit[pos];
        pos += (pos&(-pos));
    }
    return out;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <pair<int, int>> inp(n);
    set <int> st;
    for (int i = 0; i < n; i++){
        cin >> inp[i].first >> inp[i].second;
        st.insert(inp[i].second);
    }
    int cnt = 0;
    map <int, int> mp;
    for (auto &it:st) mp[it] = ++cnt;
    int answer = 0;
    sort(inp.begin(), inp.end());
    for (auto &it:inp){
        update(mp[it.second], 1);
        answer = max(answer, get(cnt, mp[*(st.upper_bound(it.first))]));
    }
    cout << answer;
    return 0;
}