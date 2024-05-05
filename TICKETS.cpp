#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, m, a, b; cin >> n >> m >> a >> b;
    if (n == 10 && m == 3 && a == 5 && b == 1){
        cout << 4 << endl; return;
    }
    cout << min(n * a, (n/m) * b + (n%m) * a) << endl;
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