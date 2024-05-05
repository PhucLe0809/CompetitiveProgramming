#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str;
    int32_t one, two, answer, run;
    while (test--)
    {
        cin >> str; one = two = 0;
        for (int i = 0; i < str.size(); i++)
            if (str[i] == '0') one++;
            else two++;
        if (one != two) cout << min(one, two) << '\n';
        else cout << one-1 << '\n';
    }
    return 0;
}