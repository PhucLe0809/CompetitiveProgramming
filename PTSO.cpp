#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for (int i = 2; i*i <= n; i++){
        while (n % i == 0){
            cout << i; n /= i;
            if (n != 1) cout << "*";
        }
    }
    if (n != 1) cout << n;
    return 0;
}