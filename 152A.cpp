#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    char inp[m+1][n+1];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> inp[j][i];
        }
    }
    char temp;
    vector <bool> tick(n, false);
    for (int i = 0; i < m; i++){
        temp = *max_element(inp[i], inp[i]+n);
        for (int t = 0; t < n; t++){
            if (inp[i][t]==temp) tick[t]=true;
        }
    }
    int32_t cnt = 0;
    for (int i = 0; i < n; i++){
        if (tick[i]) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}