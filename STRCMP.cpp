#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    string str = "";
    for (int i = 0; i < m; i++) str += to_string(n);
    string ansi = "";
    for (int i = 0; i < n; i++) ansi += to_string(m);
    cout << min(str, ansi);
    return 0;
}