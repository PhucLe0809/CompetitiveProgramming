#include <bits/stdc++.h>

using namespace std;
struct cmp
{
    int32_t one, two, three;
} tmp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, res, power;
    string str;
    int32_t a, b, c;
    map <string, cmp> :: iterator it;
    while (test--)
    {
        cin >> n;
        map <string, cmp> mp;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> str; 
                tmp = mp[str];
                if (i == 0) tmp.one = 1;
                if (i == 1) tmp.two = 1;
                if (i == 2) tmp.three = 1;
                mp[str] = tmp;
            }
        a = b = c = 0;
        for (it = mp.begin(); it != mp.end(); it++)
        {
            tmp = it->second;
            res = tmp.one + tmp.two + tmp.three;
            if (res == 1) power = 3;
            else if (res == 2) power = 1;
                else if (res == 3) power = 0;
            a += tmp.one*power;
            b += tmp.two*power;
            c += tmp.three*power;
        }
        cout << a << " " << b << " " << c << '\n';
    }
    return 0;
}