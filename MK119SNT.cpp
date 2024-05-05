#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1000005

using namespace std;
int eratos[maxarray], prefix[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    fill(eratos, eratos + maxarray, 1);
    eratos[0] = eratos[1] = 0;
    for (int i = 2; i*i < maxarray; i++){
        for (int j = i*i; j < maxarray; j += i){
            eratos[j] = 0;
        }
    }
    prefix[0] = 0;
    for (int i = 1; i < maxarray; i++) prefix[i] = prefix[i-1] + eratos[i];
    while (test--){
        int a, b; cin >> a >> b;
        cout << prefix[b] - prefix[a - 1] << endl;
    }
    return 0;
}