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
        if (b%a != 0) cout << "0 0\n";
        else cout << 1 << " " << b/a << '\n';
    }
    return 0;
}