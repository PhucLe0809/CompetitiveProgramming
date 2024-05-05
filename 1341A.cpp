#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, a, b, c, d;
    while (test--)
    {
        cin >> n >> a >> b >> c >> d;
        if ((a-b)*n > c+d || (a+b)*n < c-d)
            cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}