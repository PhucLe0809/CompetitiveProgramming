#include <bits/stdc++.h>
#define maxarray 55

using namespace std;
char matrix[maxarray][maxarray];

bool is_col(char scan[55][55], int32_t n, int32_t col)
{
    for (int i = 1; i <= n; i++)
        if (scan[i][col] == 'B') return true;
    return false;
}
bool is_row(char scan[55][55], int32_t m, int32_t row)
{
    for (int i = 1; i <= m; i++)
        if (scan[row][i] == 'B') return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, r, c;
    bool check;
    while (test--)
    {
        cin >> n >> m >> r >> c; check = true;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++) 
            {
                cin >> matrix[i][j];
                if (matrix[i][j] == 'B') check = false;
            }
        if (check) cout << "-1\n";
        else if (matrix[r][c] == 'B') cout << "0\n";
            else 
            {
                if (is_row(matrix, m, r) || is_col(matrix, n, c))
                    cout << "1\n";
                else cout << "2\n";
            }
    }
    return 0;
}