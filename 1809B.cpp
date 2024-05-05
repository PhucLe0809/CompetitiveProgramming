#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t n, m;
    while (test--){
        cin >> n;
        m = sqrtl(n);
        if (m*m==n) m--;
        cout << m << '\n'; 
    }
    return 0;
}