#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t k, x;
    while (test--){
        cin >> k >> x;
        cout << 9*(k-1)+x << '\n';
    }
    return 0;
}