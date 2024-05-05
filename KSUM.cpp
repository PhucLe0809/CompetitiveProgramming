#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    vector <int> prefix(n+1);
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        prefix[i] = prefix[i-1] + x;
    }
    int answer = LONG_MIN;
    for (int i = k; i <= n; i++){
        answer = max(answer, prefix[i] - prefix[i - k]);
    }
    cout << answer;
    return 0;
}