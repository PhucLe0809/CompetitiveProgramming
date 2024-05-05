#include <bits/stdc++.h>

using namespace std; 
int32_t inp[1005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t cnt; cnt = 0;
    for (int i = 0; i < n; i++){
        cin >> inp[i];
        if (inp[i]==1) cnt++;
    }
    cout << cnt << '\n';
    for (int i = 0; i < n; i++){
        if (inp[i]==1 && i){
            cout << inp[i-1] << " ";  
        }
    }
    cout << inp[n-1];
    return 0;
}