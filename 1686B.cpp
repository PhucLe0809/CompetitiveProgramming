#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt, maxx, t;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        cnt = 0; maxx = inp[0];
        t = 0; inp[n] = 1e9;
        while (t<n){
            if (inp[t]<maxx){
                cnt++; maxx = inp[t+1];
            }else{
                maxx = inp[t];
            }
            t++;
        }
        cout << cnt << '\n';
    }
    return 0;
}