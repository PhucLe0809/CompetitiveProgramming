#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 500005

using namespace std;
bool tick[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    fill(tick, tick + maxarray, false);
    for (int i = 0; i < n; i++){
        int x; cin >> x; 
        if (x < maxarray) tick[x] = true;
    }
    for (int i = 1; i < maxarray; i++){
        if (!tick[i]){
            cout << i; return 0;
        }
    }
    return 0;
}