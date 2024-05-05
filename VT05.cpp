#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, x; cin >> n >> x;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        int num; cin >> num;
        (num == x) ? (cnt++):(cnt);
    }
    cout << cnt;
    return 0;
}