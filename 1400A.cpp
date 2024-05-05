#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; string str;
    while (test--)
    {
        cin >> n >> str;
        for (int i = 0; i < n; i++) cout << str[n-1];
        cout << '\n';
    }
    return 0;
}