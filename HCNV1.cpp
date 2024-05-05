#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b, c, d, x, y;
    cin >> a >> b >> c >> d >> x >> y;
    if (min(a, c) < x && x < max(a, c) && min(b, d) < y && y < max(b, d)){
        cout << "YES";
    }else cout << "NO";
    return 0;
}