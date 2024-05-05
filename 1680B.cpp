#include <bits/stdc++.h>

using namespace std; 
char arr[55][55];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, x, y, cntR;
    while (test--){
        cin >> n >> m;
        x = y = -1;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++){
                cin >> arr[i][j];
                if (x==-1 && arr[i][j]=='R'){
                    x = i; y = j;
                }
            }
        cntR = 0;
        for (int i = x+1; i<n && !cntR; i++)
            for (int j = 0; j<y && !cntR; j++)
                if (arr[i][j]=='R') cntR++;
        if (cntR==0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}