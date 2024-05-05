#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <bool> eratos(n+1, true);
    eratos[0] = eratos[1] = false;
    for (int i = 2; i <= round(sqrt(n)); i++){
        if (eratos[i]){
            for (int j = i*i; j <= n; j+=i){
                eratos[j] = false;
            }
        }
    }
    vector <int> prime;
    for (int i = 2; i <= n; i++){
        if (eratos[i]) prime.push_back(i);
    }
    // for (auto &it:prime) cout << it << " "; cout << '\n';
    int pivot, cnt = 0;
    for (int i = 2; i < prime.size(); i++){
        pivot = prime[i]-1;
        for (int j = 0; j < i-1; j++){
            if (prime[j]+prime[j+1] == pivot){
                cnt++; // cout << prime[i] << " ";
                break;
            }
        }
    }
    if (cnt>=k) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}