#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; test = 1;
    int32_t n, tmp, plus;
    while (test--)
    {
        cin >> n;
        while (true)
        {
            tmp = n; plus = 0;
            while (tmp)
            {
                plus += tmp%10; tmp /= 10;
            }
            if (plus % 4 == 0)
            { cout << n; break; }
            n++;
        }
    }
    return 0;
}