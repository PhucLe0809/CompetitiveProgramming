#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    vector <pair<int, int>> inp(4);
    for (auto &it:inp) cin >> it.first >> it.second;
    sort(inp.begin(), inp.end());
    int a = abs(inp[0].second  - inp[1].second);
    cout << a*a << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}