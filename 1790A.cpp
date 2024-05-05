#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string pivot = "314159265358979323846264338327";
    string str; int32_t cnt;
    while (test--)
    {
        cin >> str;
        cnt = 0;
        while (cnt < str.size() && str[cnt] == pivot[cnt]) cnt++;
        cout << cnt << '\n';
    }
    return 0;
}