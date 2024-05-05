#include <bits/stdc++.h>
#define maxarray 55

using namespace std; 
int32_t scan[maxarray][maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m;
    while (test--){
        cin >> n >> m;
        scan[0][0] = 0;
        for (int j = 1; j < m; j+= 2){
            if (((j+1)/2)%2!=0){
                scan[0][j] = scan[0][j+1] = 1;
            }else{
                scan[0][j] = scan[0][j+1] = 0;
            }
        }
        for (int j = 0; j < m; j++){
            if (scan[0][j]==0){
                for (int i = 1; i < n; i += 2){
                    if (((i+1)/2)%2!=0){
                        scan[i][j] = scan[i+1][j] = 1;
                    }else{
                        scan[i][j] = scan[i+1][j] = 0;
                    }
                }
            }else{
                for (int i = 1; i < n; i += 2){
                    if (((i+1)/2)%2!=0){
                        scan[i][j] = scan[i+1][j] = 0;
                    }else{
                        scan[i][j] = scan[i+1][j] = 1;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++) cout << scan[i][j] << " ";
            cout << '\n';
        }
    }
    return 0;
}