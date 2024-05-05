#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, a, b, c;
    while (test--)
    {
        cin >> n;
        a = b = c = (n/3 - 1);
        a += (3 + n%3)/2;
        b += ((3 + n%3)/2 + 1);
        if ((3 + n%3) % 2 == 0)
        {
            if (c == 1) a--;
            else c--;
        }
        cout << a << " " << b << " " << c << '\n';
    }
    return 0;
}