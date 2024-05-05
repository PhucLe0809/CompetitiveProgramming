#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp, plus;
    while (test--)
    {
        cin >> n; plus = 0;
        for (int i = 0; i < n; i++)
        { cin >> tmp; plus += tmp; }
        cout << int32_t(ceil(plus*1.0/n)) << '\n';
    }
    return 0;
}