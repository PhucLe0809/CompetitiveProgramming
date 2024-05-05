#include <bits/stdc++.h>

using namespace std;
vector <char> out;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, res, i; string str;
    while (test--)
    {
        cin >> n >> str;
        i = n-1; out.clear();
        while (i >= 0)
        {
            if (i-2 >= 0 && str[i] == '0')
            {
                res = (int(str[i-2])-48)*10 + (int(str[i-1])-48);
                i -= 2;
            } else res = int(str[i])-48;
            i--;
            out.push_back(char(int('a')+res-1));
        }
        reverse(out.begin(), out.end());
        for (auto &x : out) cout << x;
        cout << '\n';
    }
    return 0;
}