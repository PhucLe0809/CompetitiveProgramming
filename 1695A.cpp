#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, temp, x, y, maxx;
    while (test--){
        cin >> n >> m;
        maxx = -1e9;
        x = y = 1;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                cin >> temp;
                if (temp > maxx){
                    maxx = temp;
                    x = i; y = j;
                }
            }
        }
        cout << max({x*y, x*(m-y+1), (n-x+1)*y, (n-x+1)*(m-y+1)}) << '\n';
    }
    return 0;
}