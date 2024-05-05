#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    set <int64_t> st;
    int64_t two = 1;
    for (int i = 0; i <= 60; i++){
        st.insert(two); two *= 2;
    }
    while (test--){
        int64_t n, m; cin >> n >> m;
        n %= m;
        if (n == 0){
            cout << 0 << '\n'; continue;
        }
        int64_t lcm = (n*m)/__gcd(n, m);
        if (st.find(lcm/n) == st.end()){
            cout << -1 << '\n'; continue;
        }
        int64_t answer = 0;
        while (n){
            answer += n;
            n *= 2; n %= m;
        }
        cout << answer << '\n';
    }
    return 0;
}