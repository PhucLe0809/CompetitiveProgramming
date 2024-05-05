#include <bits/stdc++.h>
#define maxarray 1000005

using namespace std;
bool prime[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int l, r; cin >> l >> r;
        fill(prime, prime + r-l+1, true);
        for (int64_t i = 2; i*i <= r; i++){
            for (int64_t j = max(i*i, ((l+i-1)/i)*i); j <= r; j += i){
                prime[j-l] = false;
            }
        }
        if (1 >= l) prime[1-l] = false;
        for (int x = l; x <= r; x++){
            if (prime[x-l]) cout << x << '\n';
        }
    }
    return 0;
}