#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str;
    while (test--)
    {
        cin >> str;
        cout << (int(str[0])-97)*25 + (int(str[1])-97) + (str[1] < str[0]) << '\n';
    }
    return 0;
}