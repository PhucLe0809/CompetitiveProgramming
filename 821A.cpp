#include <bits/stdc++.h>

using namespace std; 
int32_t inp[55][55];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) cin >> inp[i][j];
    }
    bool check = true;
    bool __is;
    for (int i = 0; i<n && check; i++){
        for (int j = 0; j<n && check; j++){
            if (inp[i][j]==1) continue;
            __is = false;
            for (int t = 0; t<n && !__is; t++){
                for (int s = 0; s<n && !__is; s++){
                    if (inp[i][t]+inp[s][j]==inp[i][j]){
                        __is = true;
                    }
                }
            }
            if (!__is){ 
                check = false; 
                // cout << i << " " << j << " " << inp[i][j];
            }
        }
    }
    if (check) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}