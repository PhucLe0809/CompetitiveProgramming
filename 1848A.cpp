#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, m, k; cin >> n >> m >> k;
    int x, y; cin >> x >> y;
    bool check = true;
    for (int i = 0; i < k; i++){
        int a, b; cin >> a >> b;
        check = check && !((x + y) % 2 == (a + b) % 2);
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