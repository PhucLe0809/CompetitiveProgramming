#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t p, a, b, c;
    while (test--)
    {
        cin >> p >> a >> b >> c;
        a = (p/a + (p%a != 0))*a;
        b = (p/b + (p%b != 0))*b;
        c = (p/c + (p%c != 0))*c;
        cout << min({a, b, c})-p << '\n';
    }
    return 0;
}