#include<bits/stdc++.h>
#define maxarray 200005

using namespace std;
vector <int> bit(maxarray);

void update(int n, int pos, int val){
    while (pos <= n){
        bit[pos] += val;
        pos += (pos&(-pos));
    }
}
int query(int pos){
    int out = 0;
    while (pos > 0){
        out += bit[pos];
        pos -= (pos&(-pos));
    }
    return out;
}
bool comp(pair<pair<int,int>, int> a, pair<pair<int,int>, int> b) {
    if (a.first.first == b.first.first)
        return a.first.second > b.first.second;
    return a.first.first < b.first.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <pair<pair<int,int>, int>> inp(n);
    set <int> scan;
    for (int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        inp[i].first = {x, y};
        inp[i].second = i;
        scan.insert(y);
    }
    int cnt = 0;
    map <int, int> mp;
    for (auto &x:scan) mp[x] = ++cnt;
    sort(inp.begin(), inp.end(), comp);
    update(cnt, mp[inp[n-1].first.second], 1);
    vector <int> answer(n);
    for (int i = n-2; i >= 0; i--){
        answer[inp[i].second] += query(mp[inp[i].first.second]);
        update(cnt, mp[inp[i].first.second], 1);
    }
    for (int i = 0; i < n; i++) cout << answer[i] << " ";
    fill(answer.begin(), answer.end(), 0);
    fill(bit.begin(), bit.end(), 0);
    update(cnt, 1, 1);
    update(cnt, mp[inp[0].first.second]+1, -1);
    for (int i = 1; i < n; i++){
        answer[inp[i].second] += query(mp[inp[i].first.second]);
        update(cnt, 1, 1);
        update(cnt, mp[inp[i].first.second]+1, -1);
    }
    cout << '\n';
    for (int i = 0; i < n; i++) cout << answer[i] << " ";
    return 0;
}