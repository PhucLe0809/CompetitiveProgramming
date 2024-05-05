#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t x, y;
    while (test--)
    {
        cin >> x >> y;
        if (x == 0 && y == 0) cout << "0\n";
        else
        {
            if (sqrt(x*x+y*y) == int(sqrt(x*x+y*y))*1.0)
                cout << "1\n";
            else cout << "2\n";
        }
    }
    return 0;
}