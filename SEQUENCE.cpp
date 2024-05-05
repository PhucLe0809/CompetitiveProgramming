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
    if (n == 1){
        cout << "YES"; return 0;
    }
    int d = inp[1] - inp[0];
    bool check = true;
    for (int i = 1; i < n && check; i++) check = check && (inp[i] - inp[i-1] == d);
    if (check) cout << "YES"; else cout << "NO";
    return 0;
}