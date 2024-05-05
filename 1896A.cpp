#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n; 
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    for (int i = 0; i < n; i++){
        for (int i = 1; i < n-1; i++){
            if (inp[i] > inp[i-1] && inp[i] > inp[i+1]){
                swap(inp[i], inp[i+1]);
            }
        }
    }
    bool check = true;
    for (int i = 1; i < n; i++){
        check = check && (inp[i] > inp[i-1]);
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