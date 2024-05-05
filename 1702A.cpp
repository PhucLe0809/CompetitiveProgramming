#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n; string str;
    while (test--)
    {
        cin >> n; str = to_string(n);
        cout << int64_t(n - pow(10, str.size() - 1)) << '\n';
    }
    return 0;
}