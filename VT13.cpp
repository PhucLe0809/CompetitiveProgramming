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
    int res = inp[0] + inp[n-1]; int a = 0, b = n-1;
    for (int i = 0; i < n-1; i++){
        if (res <= inp[i] + inp[i+1]){
            res = inp[i] + inp[i+1];
            a = i; b = i+1;
        }
    }
    if (a == 0 && b == n-1) swap(a, b);
    cout << inp[a] << " " << inp[b];
    return 0;
}