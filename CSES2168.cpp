#include <bits/stdc++.h>
#define maxarray 200005

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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    set <int> st;
    vector <pair<pair<int, int>, int>> inp(n);
    for (int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        inp[i].first = {x, y};
        inp[i].second = i;
        st.insert(y);
    }
    vector <int> answer(n);
    sort(inp.begin(), inp.end(), comp);
    map <int, int> mp; int rank = 0;
    for (auto &it:st) mp[it] = ++rank;

    update(rank, mp[inp[n-1].first.second], 1);
    for (int i = n-2; i >= 0; i--){
        answer[inp[i].second] = get(mp[inp[i].first.second]);
        update(rank, mp[inp[i].first.second], 1);
    }
    for (auto &it:answer) (it != 0)?(cout << "1 "):(cout << "0 ");
    fill(answer.begin(), answer.end(), 0);
    fill(bit, bit + n+1, 0);
    update(rank, 1, 1);
    update(rank, mp[inp[0].first.second] + 1, -1);
    for (int i = 1; i < n; i++){
        answer[inp[i].second] = get(mp[inp[i].first.second]);
        update(n, 1, 1);
        update(rank, mp[inp[i].first.second] + 1, -1);
    }
    cout << '\n';
    for (auto &it:answer) (it != 0)?(cout << "1 "):(cout << "0 ");
    return 0;
}