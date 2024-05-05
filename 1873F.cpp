#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n, k; cin >> n >> k;
        vector <int64_t> a(n), h(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> h[i];
        int answer = (a[0] <= k)?(1):(0);
        int l = 0;
        int r; int64_t sum = a[0];
        for (int i = 1; i < n; i++){
            r = i;
            if (h[i-1]%h[i] == 0){
                sum += a[i];
                if (sum <= k){
                    answer = max(answer, r-l+1);
                }else{
                    while (l <= r && sum > k){
                        sum -= a[l];
                        l++;
                    }
                    answer = max(answer, r-l+1);
                }
            }else{
                sum = a[i];
                l = i;
                answer = max(answer, (a[i]<=k)?(1):(0));
            }
        }
        cout << answer << '\n';
    }
    return 0;
}