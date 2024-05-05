#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1000005

using namespace std;
bool eratos[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    fill(eratos, eratos + n+1, true);
    eratos[0] = eratos[1] = false;
    for (int i = 2; i * i <= n; i++){
        for (int j = i * i; j <= n; j += i){
            eratos[j] = false;
        }
    }
    for (int i = 2; i <= n; i++){
        if (eratos[i]) cout << i << " ";
    }
    return 0;
}