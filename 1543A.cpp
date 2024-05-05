#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t a, b;
    while (test--)
    {
        cin >> a >> b;
        if (a == b) cout << "0 0\n";
        else
        {
            if (a > b) swap(a, b);
            cout << b-a << " " << min(a%(b-a), (b-a) - a%(b-a)) << '\n';
        }
    }
    return 0;
}