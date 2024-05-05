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
    int answer;
    if (inp[0] >= 0) answer = inp[n-1] * inp[n-2];
    else{
        if (inp[n-1] <= 0) answer = inp[0] * inp[1];
        else answer = max(inp[0] * inp[1], inp[n-1] * inp[n-2]);
    }
    cout << answer;
    return 0;
}