#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> inp(n);
    int sum = 0;
    for (auto &it:inp){
        cin >> it; sum += it;
    }
    sort(inp.begin(), inp.end(), greater<>());
    for (int i = 0; i < n/4; i++) sum -= inp[i];
    cout << sum;
    return 0;
}