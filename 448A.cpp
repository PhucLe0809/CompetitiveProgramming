#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t a, b, c; cin >> a >> b >> c;
    int32_t d, e, f; cin >> d >> e >> f;
    int32_t n; cin >> n;
    int32_t cups = (a+b+c)/5 + ((a+b+c)%5 != 0);
    int32_t medals = (d+e+f)/10 + ((d+e+f)%10 != 0);
    if (cups+medals <= n) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}