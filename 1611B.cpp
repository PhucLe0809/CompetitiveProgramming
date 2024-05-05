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
        cout << min({(a+b)/4, a, b}) << '\n';
    }
    return 0;
}