#include <bits/stdc++.h>

using namespace std; 
int32_t scan[105][105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++)
            fill(scan[i], scan[i]+n, 0);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++)
                if (i==j || j==n-i-1) scan[i][j] = 1;
        }
        if (n%2!=0){
            scan[0][n/2]=scan[n/2][0]=1;
            scan[n-1][n/2]=scan[n/2][n-1]=1;
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) cout << scan[i][j] << " ";
            cout << '\n';
        }
    }
    return 0;
}