#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105][105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t sum = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) cin >> inp[i][j];
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i==j || j==n-i+1 || i==n/2+1 || j==n/2+1){
                sum += inp[i][j];
            }
        }
    }
    cout << sum;
    return 0;
}