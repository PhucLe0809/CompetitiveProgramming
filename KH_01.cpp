#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> inp(n-1);
    for (auto &it:inp) cin >> it;
    sort(inp.begin(), inp.end());
    int answer = n;
    for (int i = 1; i < n-1 && answer == n; i++){
        if (inp[i] - inp[i-1] != 1) answer = inp[i-1] + 1;
    }
    cout << answer;
    return 0;
}