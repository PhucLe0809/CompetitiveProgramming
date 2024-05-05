#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t a, b, c, x, y, answer;
    while (test--)
    {
        cin >> a >> b >> c >> x >> y;
        answer = min((a-x), 0) + min((b-y), 0) + c;
        if (answer < 0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}