#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int32_t inp[25];
bool tick[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t sum = 0;
    for (int i = 0; i < n; i++){
        cin >> inp[i]; sum += inp[i];
    }
    fill(tick, tick+maxarray, false);
    tick[0] = true;
    for (int i = 0; i < n; i++){
        for (int j = maxarray; j >= inp[i]; j--){
            if (tick[j-inp[i]]) tick[j] = true;
        }
    }
    for (int i = sum/2; i >= 0; i--){
        if (tick[i]){
            cout << abs(sum-2*i); break;
        }
    }
    return 0;
}