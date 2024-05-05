#include <bits/stdc++.h>

using namespace std;
int32_t scan[5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    while (test--)
    {
        cin >> scan[0] >> scan[1] >> scan[2];
        sort(scan, scan + 3);
        if ((scan[0] == scan[1] && scan[2]%2 == 0)
        || (scan[0]%2 == 0 && scan[1] == scan[2])
        || (scan[2] == scan[0] + scan[1]))
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}