#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    sort(inp.begin(), inp.end());
    bool check = (inp[0] == 1);
    for (int i = n-1; i > 0 && check; i--){
        for (int j = i-1; j >= 0; j--){
            if (inp[i] >= inp[j]) inp[i] -= inp[j];
        }
        check = check && (inp[i] == 0);
    }
    if (check) cout << "YES\n"; else cout << "NO\n";
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