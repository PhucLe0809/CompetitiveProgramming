#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, cnt;
    while (test--){
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> inp[i];
        if (k==1) cout << (n-1)/2 << '\n';
        else{
            cnt = 0;
            for (int i = 1; i < n-1; i++){
                if (inp[i]>inp[i+1]+inp[i-1]) cnt++;
            }
            cout << cnt << '\n';
        }
    }
    return 0;
}