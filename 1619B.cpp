#include <bits/stdc++.h>
#define modulo 1000000

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n;
    while (test--)
    {
        cin >> n; 
        cout << floor(sqrt(n)) + floor(cbrt(n)) - floor(sqrt(cbrt(n))) << '\n';
    }
    return 0;
}