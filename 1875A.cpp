#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int64_t a, b; cin >> a >> b;
        int n; cin >> n;
        int64_t answer = b;
        int64_t x;
        for (int i = 0; i < n; i++){
            cin >> x;
            answer += min(a-1, x);
        }
        cout << answer << '\n';
    }
    return 0;
}