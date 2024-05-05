#include <bits/stdc++.h>

using namespace std; 
int32_t scan[55][55];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--){
        cin >> n;
        for (int i = 1; i <= n; i++) scan[i][1] = i;
        for (int j = 2; j <= n; j++){
            for (int i = 1; i <= (n-j+1); i++)
                scan[i][j] = n-j+2;
            for (int i = n-j+2; i <= n; i++)
                scan[i][j] = n-j+1;
        }
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++)
                cout << scan[i][j] << " ";
            cout << '\n';
        }
    }
    return 0;
}