#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    if (inp[0] != n){
        cout << "NO\n"; return;
    }
    vector <int> scan; inp.push_back(0);
    for (int i = n-1; i >= 0; i--){
        int amount = inp[i] - inp[i+1];
        for (int j = 0; j < amount; j++) scan.push_back(i + 1);
    }
    scan.push_back(0);
    if (inp.size() != scan.size()){
        cout << "NO\n"; return;
    }
    bool check = true;
    for (int i = 0; i < n && check; i++){
        check = check && (inp[i] == scan[i]);
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