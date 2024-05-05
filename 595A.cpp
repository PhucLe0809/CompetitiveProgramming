#include <bits/stdc++.h>

using namespace std; 
int32_t inp[205];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    int32_t cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2*m; j++) cin >> inp[j];
        for (int j = 0; j < 2*m; j += 2){
            if (inp[j]==1 || inp[j+1]==1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}