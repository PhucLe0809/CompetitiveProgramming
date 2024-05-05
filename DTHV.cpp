#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int d; cin >> d; cout << d * d / 2;
    if ((d*d) % 2 == 0) cout << ".0"; else cout << ".5";
    return 0;
}