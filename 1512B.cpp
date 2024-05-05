#include <bits/stdc++.h>
#define maxarray 405

using namespace std;
char arr[maxarray][maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, y, z, t;
    while (test--)
    {
        cin >> n;
        x = y = z = t = -1;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '*')
                {
                    if (x == -1) 
                    { x = i; y = j; }
                    else { z = i; t = j; }
                }
            }
        arr[z][y] = arr[x][t] = '*';
        if (x == z)
        {
            if (x == n-1) arr[x-1][y] = arr[z-1][t] = '*';
            else arr[x+1][y] = arr[z+1][t] = '*';
        }
        if (y == t)
        {
            if (y == n-1) arr[x][y-1] = arr[z][t-1] = '*';
            else arr[x][y+1] = arr[z][t+1] = '*';
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << arr[i][j];
            cout << '\n';
        }
    }
    return 0;
}