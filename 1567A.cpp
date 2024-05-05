#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; string str;
    int32_t run;
    while (test--)
    {
        cin >> n >> str;
        run = 0;
        while (run < n)
        {
            if (str[run] == 'U') cout << "D";
            else if (str[run] == 'D') cout << "U";
                else
                {
                    if (str[run] == 'L') cout << "LR";
                    else cout << "RL";
                    run++;
                }
            run++;
        }
        cout << '\n';
    }
    return 0;
}