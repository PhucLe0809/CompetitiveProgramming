#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
char arr[maxarray][maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, cnt;
    while (test--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) 
                cin >> arr[i][j];
        cnt = 0;
        for (int i = 0; i < n; i++)
            if (arr[i][m-1] == 'R') cnt++;
        for (int j = 0; j < m; j++)
            if (arr[n-1][j] == 'D') cnt++;
        cout << cnt << '\n';
    }
    return 0;
}