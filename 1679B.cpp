#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, energy, plus, tmp;
    while (test--)
    {
        cin >> n >> energy; plus = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp; plus += tmp;
        }
        cout << max(plus-energy, 0) << '\n';
    }
    return 0;
}