#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n; cin >> n;
    for (int64_t k = 1; k <= n; k++){
        cout << (k - 1)*(k + 4)*(k*k - 3*k + 4)/2 << '\n';
    }
    return 0;
}