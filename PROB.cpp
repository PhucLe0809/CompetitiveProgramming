#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b; cin >> a >> b;
    if (a * b > 0) cout << 1;
    else{
        if (a * b < 0) cout << -1;
        else cout << 0;
    }
    return 0;
}