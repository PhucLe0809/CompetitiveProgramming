#include <bits/stdc++.h>

using namespace std;

bool comp(pair <int, int> a, pair <int, int> b){
    if (a.first != b.first) return a.first > b.first;
    else return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n, k; cin >> n >> k;
        vector <pair<int, int>> inp(n);
        for (int i = 0; i < n; i++){
            cin >> inp[i].first;
            inp[i].first %= k;
            if (inp[i].first == 0) inp[i].first = k;
            inp[i].second = i+1;
        }
        sort(inp.begin(), inp.end(), comp);
        for (auto &it:inp) cout << it.second << " ";
        cout << '\n';
    }
    return 0;
}