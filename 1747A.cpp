#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, tmp, plus, one, two;
    while (test--)
    {
        cin >> n; plus = one = two = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp; plus += tmp;
            if (tmp > 0) one += tmp;
            else two += tmp;
        }
        cout << max(abs(plus), abs(one-abs(two))) << '\n';
    }
    return 0;
}