#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t m; cin >> m;
    int32_t scan[105];
    scan[0] = 2; scan[1] = 4; scan[2] = 6;
    int32_t i = 2;
    while (scan[i] <= m){
        i++;
        scan[i] = 2*scan[i-3]+4*scan[i-2]+6*scan[i-1];
    }
    for (i = 0; ; i++){
        if (scan[i] > m){
            cout << i-1; break;
        }
    }
    return 0;
}