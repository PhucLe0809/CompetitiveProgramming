#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt;
    while (test--){
        cin >> n;
        inp[0] = cnt = 0;
        for (int i = 1; i <= n; i++){
            cin >> inp[i];
            if (inp[i]!=0 && inp[i-1]==0) cnt++;
        }
        cout << min(cnt, 2) << '\n';
    }
    return 0;
}