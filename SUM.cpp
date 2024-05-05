#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++) res += (i*i - (i - 1)*(i - 1));
    cout << res;
    return 0;
}