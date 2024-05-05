#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int bit[maxarray];

void update(int n, int pos, int val){
    while (pos <= n){
        bit[pos] += val;
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x;
    vector <pair<pair<int, int>, int>> inp(n);
    vector <int> tick(n);
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
    sort(inp.begin(), inp.end());
    vector <int> answer(n);
    for (int i = n-1; i >= 0; i--){
        answer[inp[i].second] = (inp[i].first.second-inp[i].first.first-1) - 2*get(mp[inp[i].first.second]);
        update(cnt, mp[inp[i].first.second], 1);
    }
    for (auto &it:answer) cout << it << " ";
    return 0;
}