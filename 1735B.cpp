#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt, minn;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        minn = 2*inp[0]-1; cnt = 0;
        for (int i = 1; i < n; i++){
            if (inp[i]%minn) cnt += (inp[i]/minn);
            else cnt += (inp[i]/minn-1);
        }
        cout << cnt << '\n';
    }
    return 0;
}