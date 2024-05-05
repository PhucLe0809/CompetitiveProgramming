#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 129

using namespace std;
int tribo[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    tribo[0] = 0; tribo[1] = tribo[2] = 1;
    for (int i = 3; i < maxarray; i++){
        if (i % 2 != 0) tribo[i] = tribo[i-1] + tribo[i-2];
        else tribo[i] = tribo[i-1] - 1;
    }
    int q; cin >> q;
    while (q--){
        int n; cin >> n; cout << tribo[n] << endl;
    }
    return 0;
}