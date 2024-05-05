#include <bits/stdc++.h>

using namespace std;
set <int32_t> row, col;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    char key;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> key;
            if (key == 'S')
            {
                row.insert(i);
                col.insert(j);
            }
        }
    cout << m*(n - row.size()) + (m-col.size())*row.size() << '\n';
    return 0;
}