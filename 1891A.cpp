#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
vector <int> pow2 = {0, 1};

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> inp(n+1); inp[0] = LONG_MIN;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    bool check = true;
    for (int i = 1; pow2[i-1] <= n; i++){
        for (int j = pow2[i-1] + 1; j < pow2[i] && j < n; j++){
            check = check && (inp[j] <= inp[j+1]);
        }
    }
    if (check) cout << "YES\n"; else cout << "NO\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    for (int i = 0; i < 6; i++) pow2.push_back(pow2.back() * 2);
    while (test--){
        GOTOHANOI();
    }
    return 0;
}