#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <pair<int, int>> inp(n);
    int limit = 0;
    for (int i = 0; i < n; i++){
        cin >> inp[i].first; inp[i].second = i+1;
        limit += inp[i].first;
    }
    sort(inp.begin(), inp.end());
    if (n==1) cout << -1;
    else{
        if (inp[0].first == limit-inp[0].first) cout << -1;
        else cout << 1 << '\n' << inp[0].second;
    }
    return 0;
}