#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
int32_t tick[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp;
    while (test--)
    {
        cin >> n; 
        fill(tick, tick+n, 0);
        for (int i = 0; i < n; i++)
        { cin >> tmp; tick[tmp]++; }
        while (n)
        {
            for (int i = 0; i < maxarray && n; i++)
                if (tick[i])
                { cout << i << " "; tick[i]--; n--; }
        }
        cout << '\n';
    }
    return 0;
}