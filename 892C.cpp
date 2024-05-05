#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int64_t n; cin >> n;
        if (n==2){
            cout << 2 << '\n';
            continue;
        }
        int64_t answer = 0;
        for (int64_t k = 1; k < n; k++){
            int64_t tmp, maxx; tmp = maxx = 0;
            for (int64_t i = 1; i <= k; i++){
                tmp += 1LL*i*i; maxx = max(maxx, 1LL*i*i);
            }
            for (int64_t i = k+1; i <= n; i++){
                tmp += 1LL*i*(n-i+k+1); maxx = max(maxx, 1LL*i*(n-i+k+1));
            }
            answer = max(answer, tmp-maxx);
        }
        cout << answer << '\n';
    }
    return 0;
}