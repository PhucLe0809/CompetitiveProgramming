#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    int32_t i = 0, run = 1;
    while (i < n)
    {
        cout << str[i]; i += run;
        run++;
    }
    return 0;
}