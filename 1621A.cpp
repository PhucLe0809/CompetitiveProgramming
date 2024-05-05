#include <bits/stdc++.h>
#define maxarray 45

using namespace std;
char chess[maxarray][maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, i, j;
    while (test--)
    {
        cin >> n >> k;
        i = j = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) chess[i][j] = '.';
        while (k && i < n)
        {
            chess[i][j] = 'R'; i += 2; j += 2;
            k--;
        }
        if (k != 0) cout << "-1\n";
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                    cout << chess[i][j];
                cout << '\n';
            }
        }
    }
    return 0;
}