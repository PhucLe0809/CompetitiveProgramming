#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 2000005

using namespace std;
bool prime[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, t; cin >> n >> t;
    int p, q, m; cin >> p >> q >> m;
    fill(prime, prime + maxarray, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i*i < maxarray; i++){
        for (int j = i*i; j < maxarray; j += i){
            prime[j] = false;
        }
    }
    vector <int> prefix(n+1);
    for (int i = 1; i <= n; i++){
        int num = (p * i) % m + q;
        prefix[i] = prefix[i-1] + (int)prime[num];
    }
    while (t--){
        int u, v; cin >> u >> v;
        cout << prefix[v] - prefix[u-1] << endl;
    }
    return 0;
}