#include <bits/stdc++.h>

using namespace std; 

bool is_prime(int32_t num){
    for (int i = 2; i <= round(sqrt(num)); i++){
        if (num%i==0) return false;
    }
    return true;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, pos, sum;
    while (test--){
        cin >> n;
        pos = -1; sum = 0;
        for (int i = 1; i <= n; i++){
            cin >> x; sum += x;
            if (x%2!=0) pos = i;
        }
        if (!is_prime(sum)){
            cout << n << '\n';
            for (int i = 1; i <= n; i++) cout << i << " ";
            cout << '\n'; continue;
        }
        cout << n-1 << '\n';
        for (int i = 1; i <= n; i++){
            if (i!=pos) cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}