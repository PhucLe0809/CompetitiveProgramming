#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t n, m, one, two;
    while (test--){
        cin >> n >> m;
        one = n*m;
        for (int i = 0; i <= m-2; i++){
            one = min(one, int64_t(ceil((m-i)/3.0))*n+int64_t(ceil(n/3.0))*i);
        }
        two = n*m;
        for (int i = 0; i <= n-2; i++){
            two = min(two, int64_t(ceil((n-i)/3.0))*m+int64_t(ceil(m/3.0))*i);
        }
        cout << min(one, two) << '\n';
    }
    return 0;
}