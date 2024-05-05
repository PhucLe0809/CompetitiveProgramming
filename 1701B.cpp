#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
bool tick[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--){
        cin >> n;
        fill(tick, tick+n+1, false);
        cout << "2\n";
        for (int i = 1; i <= n; i++){
            if (!tick[i]){
                for (int t = i; t <= n; t *= 2){
                    if (!tick[t]){
                        cout << t << " ";
                        tick[t] = true;
                    }
                }
            }
        }
        cout << '\n';
    }
    return 0;
}