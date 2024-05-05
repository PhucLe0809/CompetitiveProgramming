#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k; cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> inp[i];
    int32_t cnt = 0;
    for (int i = 0; i < n; i++){
        if (k>=inp[i]) cnt++;
        else break;
    }
    int32_t pivot = cnt-1;
    for (int i = n-1; i > pivot; i--){
        if (k>=inp[i]) cnt++;
        else break;
    }
    cout << cnt << '\n';
    return 0;
}