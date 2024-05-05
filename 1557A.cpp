#include <bits/stdc++.h>
#define inf 1e9

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp, maxx; 
    int64_t plus;
    while (test--)
    {
        cin >> n; plus = 0; maxx = -inf;
        for (int i = 0; i < n; i++)
        { 
            cin >> tmp; 
            plus += tmp; maxx = max(maxx, tmp);
        }
        cout << fixed << setprecision(9) << double(maxx*1.0 + (plus-maxx)*1.0/(n-1));
        cout << '\n';
    }
    return 0;
}