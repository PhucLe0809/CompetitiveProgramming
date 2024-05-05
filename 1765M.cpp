#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t n, b, val, tmp;
    while (test--){
        cin >> n;
        // a + b = n; --> b*(x+1) = n --> x = n/b - 1;
        // a = b*x;
        val = n;
        for (int64_t i = round(sqrt(n)); i >= 1; i--){
            if (n%i==0){
                tmp = i*(n-i)/__gcd(i, n-i);
                if (tmp < val){
                    val = tmp; b = i;
                }
                if (n/i != n){
                    tmp = (n/i)*(n-n/i)/__gcd(n/i, n-n/i);
                    if (tmp < val){
                        val = tmp; b = n/i;
                    }
                }
            }
        }
        cout << b << " " << n-b << '\n';
    }
    return 0;
}