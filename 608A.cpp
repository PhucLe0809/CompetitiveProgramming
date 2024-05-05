#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    if (a.first==b.first) return (a.second<b.second);
    else return (a.first>b.first);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, s; cin >> n >> s;
    vector <pair<int, int>> inp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i].first >> inp[i].second;
    }
    inp.push_back({s, 0});
    sort(inp.begin(), inp.end(), comp);
    int m = 0;
    for (int i = 1; i <= n; i++){
        m += inp[i-1].first-inp[i].first;
        if (m>=inp[i].second){}
        else m = inp[i].second;
    }
    cout << m+inp[n].first;
    return 0;
}