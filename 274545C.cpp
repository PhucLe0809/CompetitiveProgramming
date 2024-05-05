#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int bit[maxarray] = {0};

void update(int n, int pos, int val){
    while (pos <= n){
        bit[pos] += val;
        pos += (pos&(-pos));
    }
}
int query(int n, int pos){
    int out = 0;
    while (pos > 0){
        out += bit[pos];
        pos -= (pos&(-pos));
    }
    return out;
}
bool comp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b){
    return a.first.first < b.first.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x;
    vector <int> tick(n);
    vector <pair<pair<int, int>, int>> inp(n);
    vector <int> thend;
    for (int i = 0; i < 2*n; i++){
        cin >> x; x--;
        tick[x]++;
        if (tick[x] == 1) inp[x].first.first = i;
        else{
            inp[x].first.second = i;
            inp[x].second = x;
            thend.push_back(i);
        }
    }
    int cnt = 0;
    map <int, int> mp; 
    for (auto &it:thend) mp[it] = ++cnt;
    sort(inp.begin(), inp.end(), comp);
    vector <int> answer(n);
    for (int i = n-1; i >= 0; i--){
        answer[inp[i].second] = query(cnt, mp[inp[i].first.second]);
        update(cnt, mp[inp[i].first.second], 1);
    }
    for (auto &it:answer) cout << it << " ";
    return 0;
}