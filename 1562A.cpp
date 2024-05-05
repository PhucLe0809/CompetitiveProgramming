#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t a, b;
    while (test--)
    {
        cin >> a >> b;
        if (b/2 + 1 >= a)
            cout << b - (b/2 + 1) << '\n';
        else cout << b-a << '\n';
    }
    return 0;
}