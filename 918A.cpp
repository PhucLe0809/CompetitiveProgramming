#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
bool tick[maxarray]; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t f1, f2, f;
    f1 = 0; f2 = 1; f = 1;
    fill(tick, tick+maxarray, false);
    while (f < maxarray){
        tick[f] = true;
        f = f1+f2;
        f2 = f1; f1 = f;
    }
    for (int i = 1; i <= n; i++){
        if (tick[i]) cout << "O";
        else cout << "o";
    }
    return 0;
}