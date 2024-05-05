#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; string b;
    int32_t c, pre;
    while (test--)
    {
        cin >> n >> b; pre = 0;
        for (auto x : b)
        {
            c = (x - '0' + 1)!=pre;
            cout << c;
            pre = c + x - '0';
        }
        cout << '\n';
    }
    return 0;
}