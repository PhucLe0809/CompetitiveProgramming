#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test; 
    int n, t, x, y;
    int arr[105][105];
    while (test--){
        cin >> n;
        if (n==2) cout << "-1\n";
        else{
            t = 1;
            for (int i = 0; i<n && t<=n*n; i++){
                for (int j = 0; j<n && t<=n*n; j++){
                    arr[i][j] = t; t += 2;
                    if (t>n*n){ 
                        x=i+(j+1)/n; y=(j+1)%n; 
                    }
                } 
            }
            t = 2;
            for (int j = y; j<n && t<=n*n; j++){
                arr[x][j] = t; t += 2;
            }
            for (int i = x+1; i<n && t<=n*n; i++){
                for (int j = 0; j<n && t<=n*n; j++){
                    arr[i][j] = t; t += 2;
                }
            }
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){
                    cout << arr[i][j] << " ";
                }
                cout << '\n';
            }
        }
    }
    return 0;
}