#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int32_t inp[maxarray], tick[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        fill(tick, tick+n, 0);
        for (int i = 1; i < n-1; i++){
            if (inp[i]>inp[i-1] && inp[i]>inp[i+1]){
                tick[i-1]++; tick[i+1]++;
            }
        }
        cnt = 0;
        for (int i = 0; i < n-2; i++){
            if (tick[i]==1 && tick[i+2]==1){
                cnt++; inp[i]=inp[i+1];
                tick[i] = tick[i+2] = 0;
            }
            if (tick[i]==2){
                cnt++; inp[i]=max(inp[i-1], inp[i+1]);
                tick[i-2] = tick[i] = 0;
                tick[i+2]--;
            }
        }
        cout << cnt << '\n';
        for (int i = 0; i < n; i++) cout << inp[i] << " ";
        cout << '\n';
    }
    return 0;
}