#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int cnt = 0;
    for (int i = 1; i <= abs(n); i++){
        if (n % i == 0) cnt++;
    }
    cout << cnt;
    return 0;
}