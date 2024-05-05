#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t x, y;
    int32_t u, d, l, r;
    string str; bool check_1, check_2;
    while (test--)
    {
        cin >> x >> y >> str;
        u = d = l = r = 0;
        for (int i = 0; i < str.size(); i++)
        {
            switch (str[i])
            {
                case 'U': u++; break;
                case 'D': d++; break;
                case 'L': l++; break;
                case 'R': r++; break;
            }
        } 
        check_1 = check_2 = false;
        if (x == 0) check_1 = true;
        else 
        {
            if (x > 0 && r >= x) check_1 = true;
            if (x < 0 && l >= abs(x)) check_1 = true;
        }
        if (y == 0) check_2 = true;
        else
        {
            if (y > 0 && u >= y) check_2 = true;
            if (y < 0 && d >= abs(y)) check_2 = true;
        }
        if (check_1 && check_2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}