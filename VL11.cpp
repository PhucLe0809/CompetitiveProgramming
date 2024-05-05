#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_prime(int n){
    if (n < 2) return false;
    for (int i = 2; i <= (int)round(sqrt(n)); i++){
        if (n % i == 0) return false;
    }
    return true;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    (is_prime(n)) ? (cout << "YES"):(cout << "NO");
    return 0;
}