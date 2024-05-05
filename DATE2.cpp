#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int s; cin >> s;
    int h = s / 3600; s -= h * 3600;
    int m = s / 60; s -= m * 60;
    if (h < 10) cout << 0 << h; else cout << h; cout << ":";
    if (m < 10) cout << 0 << m; else cout << m; cout << ":";
    if (s < 10) cout << 0 << s; else cout << s;
    return 0;
}
