#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, m, k;
    while (test--){
        cin >> n >> m >> k;
        if (m<=n/k){
            cout << m << '\n'; continue;
        }
        cout << (n/k)-int(ceil((m-n/k)*1.0/(k-1))) << '\n';
    }
    return 0;
}