#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t pizza;
    while (test--)
    {
        cin >> pizza;
        if (pizza <= 6) cout << 15 << '\n';
        else cout << int64_t((pizza + (pizza%2 != 0))*5/2) << '\n';
    }
    return 0;
}