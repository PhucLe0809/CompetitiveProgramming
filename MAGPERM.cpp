#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    if (k == 0){
        for (int i = 1; i <= n; i++) cout << i << " ";
        return 0;
    }
    if (!(n % k == 0 && (n/k) % 2 == 0)){
        cout << -1; return 0;
    }
    for (int i = 1; i <= n/k; i++){
        if (i % 2 != 0){
            for (int j = (i-1)*k + 1; j <= i*k; j++) cout << j+k << " ";
        }else{
            for (int j = (i-1)*k + 1; j <= i*k; j++) cout << j-k << " ";
        }
    }
    return 0;
}