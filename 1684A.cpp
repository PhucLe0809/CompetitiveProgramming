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
        if (str.size() == 2) cout << str[1] << '\n';
        else cout << *min_element(str.begin(), str.end()) << '\n';
    }
    return 0;
}