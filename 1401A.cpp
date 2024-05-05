#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k;
    while (test--)
    {
        cin >> n >> k;
        if (k >= n) cout << k-n << '\n';
        else 
        {
            if (k % 2 != 0 and n % 2 == 0) 
                cout << "1\n";
            else if (k % 2 == 0 and n % 2 != 0)
                    cout << "1\n";
                else cout << "0\n";
        }
    }
    return 0;
}