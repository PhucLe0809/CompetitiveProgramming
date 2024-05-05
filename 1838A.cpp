#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector <int64_t> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        int64_t answer = LONG_MIN; bool check = false;
        for (int i = 0; i < n && !check; i++){
            if (inp[i] < 0){
                answer = inp[i]; check = true;
            }else answer = max(answer, inp[i]);
        }
        cout << answer << '\n';
    }
    return 0;
}