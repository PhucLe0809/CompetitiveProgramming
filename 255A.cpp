#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t a, b, c, tmp;
    a = b = c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (i%3 == 0) a += tmp;
        if (i%3 == 1) b += tmp;
        if (i%3 == 2) c += tmp;
    }
    int32_t maxx = max({a, b, c});
    if (maxx == a) cout << "chest\n";
    if (maxx == b) cout << "biceps\n";
    if (maxx == c) cout << "back\n";
    return 0;
}