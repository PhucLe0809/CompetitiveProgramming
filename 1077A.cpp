#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t a, b, k;
    while (test--)
    {
        cin >> a >> b >> k;
        cout << int64_t(((k+1)/2)*a - (k/2)*b) << '\n';
    }
    return 0;
}