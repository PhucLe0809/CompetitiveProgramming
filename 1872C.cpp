#include <bits/stdc++.h>
#define maxarray 1000007

using namespace std;

bool is_prime(int num){
    for (int i = 2; i*i <= num; i++){
        if (num%i == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int l, r; cin >> l >> r;
        int a, b; a = b = -1;
        if (l == r){
            if (!is_prime(r)){
                for (int i = 2; i <= r; i++){
                    if (r % i == 0){
                        a = i; b = (r/i - 1)*i;
                        break;
                    }
                }
            }
        }else if (r/2 != 1){
            a = b = r/2;
        }
        if (a == -1) cout << -1 << '\n';
        else cout << a << " " << b << '\n';
    }
    return 0;
}