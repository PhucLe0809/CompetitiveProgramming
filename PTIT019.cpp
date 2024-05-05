#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector <int> inp(3);
    for (int i = 0; i < 3; i++) cin >> inp[i];
    sort(inp.begin(), inp.end(), greater<>());
    for (auto &it:inp) cout << it << " ";
    return 0;
}