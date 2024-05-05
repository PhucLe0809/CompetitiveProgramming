#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
vector <vector <int32_t>> matrix(maxarray);
vector <int32_t> prefix;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t s, n; cin >> s >> n;
    for (int i = 0; i < s+1; i++)
        for (int j = 0; j < n+1; j++)
            matrix[i].push_back(0);
    bool check;
    for (int i = 0; i < s+1; i++) prefix.push_back(0);
    for (int i = s-1; i >= 0; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            //cout << prefix[i+j] << " "; 
            if (i+j > s) check = false;
            else
            {
                if (prefix[i+j] == 0) check = true;
                else if (prefix[i+j] == matrix[i+j][j] && matrix[i+j][j] != 0)
                        check = true;
                    else check = false;
            }
            if (check) matrix[i][j] = j;
        }
        //cout << '\n';
        prefix[i] = accumulate(matrix[i].begin(), matrix[i].end(), 0);
    }
    for (int i = s; i >= 0; i--)
    {
        cout << i << " : ";
        for (int j = 1; j <= n; j++) cout << matrix[i][j] << " ";
        cout << '\n';
    }
    return 0;
}