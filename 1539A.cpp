#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t n, x, t, m, answer;
    while (test--){
        cin >> n >> x >> t;
        m = min(t/x, n);
        answer = m*(n-m)+(m-1)*m/2;
        cout << answer << '\n';
    }
    return 0;
}