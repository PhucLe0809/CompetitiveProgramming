#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector <int64_t> inp(n);
        int64_t pro = 1, answer = 1, zero = 0;
        for (int i = 0; i < n; i++){
            cin >> inp[i];
            pro *= inp[i];
            if (inp[i] == 0) zero++;
            if (inp[i]!=0) answer *= inp[i];
        }
        if (zero > 1){
            cout << 0 << '\n';continue;
        }
        if (pro == 0) cout << answer << '\n';
        else{
            for (int i = 0; i < n; i++){
                answer = max(answer, (pro/inp[i])*(inp[i]+1));
            }
            cout << answer << '\n';
        }
    }
    return 0;
}