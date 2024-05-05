#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--)
    {
        cin >> n;
        if (n % 7 == 0) cout << n << '\n';
        else if(n%10 < n%7)
                cout << n+7 - n%7 << "\n";
            else cout << n - n%7 << "\n";
    }
    return 0;
}