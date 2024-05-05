#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    long long res = n, a = 0, b = 0;
    for (long long i = (int)sqrt(n); i >= 1; i--){
        if (n % i == 0){
            cout << i << " " << n/i;
            return 0;
        }
    }
}