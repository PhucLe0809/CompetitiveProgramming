#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    sort(inp.begin(), inp.end());
    int cnt = 0;
    for (int i = 0; i < n-1; i++) cnt += (inp[i+1] - inp[i] - 1);
    cout << cnt;
    return 0;
}