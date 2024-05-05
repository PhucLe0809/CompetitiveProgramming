#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, odd, even, tmp;
    while (test--)
    {
        cin >> n;
        odd = even = 0;
        for (int i = 0; i < n; i++) 
        {
            cin >> tmp;
            if (tmp % 2 == 0) even++;
            else odd++;
        }
        cout << n - max(odd, even) << '\n';
    }
    return 0;
}