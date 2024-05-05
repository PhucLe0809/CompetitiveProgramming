#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
int32_t inp[maxarray], tick[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp;
    while (test--)
    {
        cin >> n; 
        fill(tick, tick+maxarray, 0);
        for (int i = 0; i < n; i++)
        { cin >> inp[i]; tick[inp[i]]++; }
        if (n == 1 || (inp[0] == inp[n-1])) cout << "NO\n";
        else
        {
            cout << "YES\n";
            while (n)
            {
                for (int i = maxarray-1; i >= 0 && n; i--)
                    if (tick[i])
                    { cout << i << " "; tick[i]--; n--; }
            }
            cout << '\n';
        }
    }
    return 0;
}