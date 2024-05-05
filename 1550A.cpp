#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t s, power;
    while (test--)
    {
        cin >> s; power = 1;
        while (pow(power, 2) < s) power++;
        cout << power << '\n';
    }
    return 0;
}