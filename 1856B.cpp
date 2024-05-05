#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int64_t n; cin >> n;
        int64_t sum, x, one; 
        sum = one = 0;
        for (int i = 0; i < n; i++){
            cin >> x; sum += x; 
            if (x == 1) one++;
        }
        if (n == 1){
            cout << "NO\n"; continue;
        }
        if (sum >= n*(n+1)/2){
            cout << "YES\n"; continue;
        }
        if (sum-2*one >= n-one) cout << "YES\n"; else cout << "NO\n";
    }
    return 0;
}