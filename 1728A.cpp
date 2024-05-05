#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp, value, address;
    while (test--)
    {
        cin >> n; value = address = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            if (tmp > value)
            { value = tmp; address = i+1; }
        }
        cout << address << '\n';
    }
    return 0;
}