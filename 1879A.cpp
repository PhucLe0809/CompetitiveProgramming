#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    int a, b; cin >> a >> b;
    bool check = true;
    for (int i = 1; i < n; i++){
        int s, e; cin >> s >> e;
        if (s < a) continue;
        check = check && (e < b);
    }
    if (check) cout << a; else cout << -1;
    cout << endl;
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