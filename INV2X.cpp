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
    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            cnt += (int)(inp[i] > 2*inp[j]);
        }
    }
    cout << cnt;
    return 0;
}