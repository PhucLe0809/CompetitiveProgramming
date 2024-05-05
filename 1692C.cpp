#include <bits/stdc++.h>

using namespace std;
char scan[9][9];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    while (test--)
    {
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
                cin >> scan[i][j];
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
                if (scan[i][j] == '#' && scan[i][j] == scan[i-1][j-1]
                && scan[i][j] == scan[i+1][j+1] && scan[i][j] == scan[i-1][j+1]
                && scan[i][j] == scan[i+1][j-1] && scan[i-1][j] == '.'
                && scan[i][j+1] == '.' && scan[i][j-1] == '.' && scan[i+1][j] == '.')
                {
                    cout << i+1 << " " << j+1 << '\n'; break;
                }
    }
    return 0;
}