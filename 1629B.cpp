#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t l, r, k, odd, even;
    while (test--)
    {
        cin >> l >> r >> k;
        if (l == r) 
        {
            if (r == 1) cout << "NO\n";
            else cout << "YES\n";
        }
        else 
        {
            odd = even = (r-l+1)/2;
            if ((r-l+1)%2 != 0)
            {
                if (l % 2 == 0) even++;
                else odd++;
            }
            if (k >= odd) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}