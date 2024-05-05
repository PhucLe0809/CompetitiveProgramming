#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, f, a, b; cin >> n >> f >> a >> b;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    int sum = min(b, inp[0] * a);
    for (int i = 0; i < n-1; i++){
        int amount = min((inp[i+1] - inp[i])*a, b);
        sum += amount;
    }
    if (f - sum > 0) cout << "YES\n"; else cout << "NO\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}