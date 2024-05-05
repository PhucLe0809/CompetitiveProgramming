#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp, one;
    while (test--)
    {
        cin >> n; one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            if (tmp == 1) one++;
        }
        if (one % 2 == 0)
            cout << one/2 + n-one << '\n';
        else cout << one/2 + n-one+1 << '\n';
    }
    return 0;
}