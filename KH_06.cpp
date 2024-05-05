#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool comp(pair<int, int> &a, pair<int, int> &b){
    if (a.first == b.first) return a.second < b.second;
    else return a.first < b.first;
}

void GOTOHANOI(){
    int n; cin >> n;
    vector <pair<int, int>> inp(n);
    for (auto &it:inp) cin >> it.second >> it.first;
    sort(inp.begin(), inp.end(), comp);
    int thend = 0, cnt = 0;
    for (auto &it:inp){
        if (it.second >= thend){
            cnt++; thend = it.first;
        }
    }
    cout << cnt << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}