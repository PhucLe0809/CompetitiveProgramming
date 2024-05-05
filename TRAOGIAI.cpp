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
    sort(inp.begin(), inp.end(), greater<>());
    int ind = n/2 - 1;
    while (ind < n && inp[ind] == inp[n/2 - 1]) ind++;
    cout << ind;
    return 0;
}