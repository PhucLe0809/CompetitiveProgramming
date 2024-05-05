#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
int32_t scan[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, s, r;
    while (test--)
    {
        cin >> n >> s >> r;
        scan[0] = s-r;
        fill(scan+1, scan+n, r/(n-1));
        r -= (r/(n-1))*(n-1);
        for (int i = 1; i < n && r; i++)
        { scan[i]++; r--; }
        for (int i = 0; i < n; i++) cout << scan[i] << " ";
        cout << '\n';
    }
    return 0;
}