#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    sort(inp.begin(), inp.end(), greater<>());
    int answer = 0;
    for (int i = 0; i + k - 1 < n; i += k) answer += (inp[i] - 1) * 2;
    if (n % k != 0) answer += (inp[(n/k) * k] - 1) * 2;
    cout << answer;
    return 0;
}