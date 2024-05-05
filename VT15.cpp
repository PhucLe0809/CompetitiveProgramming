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
    int answer = inp[n-1] * inp[n-2] * inp[n-3];
    if (!(inp[0] >= 0 || inp[n-1] <= 0)) answer = max(answer, inp[0] * inp[1] * inp[n-1]);
    cout << answer;
    return 0;
}