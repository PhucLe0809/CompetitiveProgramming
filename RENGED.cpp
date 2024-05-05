#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b, c, d; cin >> a >> b >> c >> d;
    if ((c <= a && a <= d) || (c <= b && b <= d) || (a <= c && c <= b) || (a <= d && d <= b)){
        cout << "YES";
    }else cout << "NO";
    return 0;
}