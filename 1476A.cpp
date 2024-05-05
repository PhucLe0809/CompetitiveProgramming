#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    double n, k;
    while (test--){
        cin >> n >> k;
        k = ceil(n/k)*k;
        cout << int64_t(ceil(k/n)) << '\n';
    }
    return 0;
}