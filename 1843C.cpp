#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int64_t n; cin >> n;
        int64_t answer = n;
        while (n!=0){
            n /= 2; answer += n;
        }
        cout << answer << '\n';
    }
    return 0;
}