#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        int64_t x; cin >> x;
        vector <int64_t> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp.begin(), inp.end());
        vector <int64_t> scan(n);
        scan[0] = inp[0];
        for (int i = 1; i < n; i++) scan[i] = scan[i-1]+inp[i];
        if (x >= inp[n-1]*n-scan[n-1]){
            cout << inp[n-1] + (x - (inp[n-1]*n-scan[n-1]))/n << '\n';
            continue;
        }
        int64_t answer = inp[0];
        int64_t total;
        for (int i = 0; i < n; i++){
            total = (i+1)*inp[i];
            if (total-scan[i] >= x){
                if (total-scan[i] == x){
                    answer = inp[i]; break;
                }
                if (i == 0){
                    total = 0; answer = inp[0];
                }else{
                    total = (i)*inp[i-1]-scan[i-1];
                    answer = inp[i-1];
                }
                if (i != 0) answer += (x - total)/i;
                break;
            }
        }
        cout << answer << '\n';
    }
    return 0;
}