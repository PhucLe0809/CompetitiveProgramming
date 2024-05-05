#include <bits/stdc++.h>

using namespace std; 
string s[25], t[25];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> s[i];
    for (int i = 1; i <= m; i++) cin >> t[i];
    string a, b;
    int32_t q; cin >> q;
    int32_t y;
    while (q--){
        cin >> y;
        if (y%n==0) a=s[n]; else a=s[y%n];
        if (y%m==0) b=t[m]; else b=t[y%m];
        cout << a+b << '\n';
    }
    return 0;
}