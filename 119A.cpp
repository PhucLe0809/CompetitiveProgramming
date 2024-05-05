#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t a, b, n; cin >> a >> b >> n;
    int32_t run, win;
    run = 1;
    while (n > 0)
    {
        if (run%2 != 0)
        {
            if (__gcd(a, n) > n) win = 1;
            else n -= __gcd(a, n);
            if (n == 0) win = 0;
        } else
        {
            if (__gcd(b, n) > n) win = 0;
            else n -= __gcd(b, n);
            if (n == 0) win = 1;
        }
        run++;
    }
    cout << win;
    return 0;
}