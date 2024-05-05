#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    double answer = 0.0;
    for (int i = 2; i <= n; i++) answer += 1.0 / i;
    cout << fixed << setprecision(4) << answer;
    return 0;
}