#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t a, b, c;
    while (test--)
    {
        cin >> a >> b >> c;
        cout << int64_t((a+b+c)/2) << '\n';
    }
    return 0;
}