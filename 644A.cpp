#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, a, b; cin >> n >> a >> b;
    if (n>a*b) cout << -1;
    else{
        int arr[a+1][b+1];
        for (int i = 1; i <= a; i++){
            for (int j = 1; j <= b; j++){
                if (n>0){
                    if (i%2!=0) arr[i][j] = (i-1)*b + j;
                    else arr[i][b-j+1] = (i-1)*b + j;
                    n--;
                }else{
                    if (i%2!=0) arr[i][j] = 0;
                    else arr[i][b-j+1] = 0;
                }
            }
        }
        for (int i = 1; i <= a; i++){
            for (int j = 1; j <= b; j++){
                cout << arr[i][j] << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}