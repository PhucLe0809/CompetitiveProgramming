#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int64_t> mod(n);
    int64_t m, inp; m = 0;
    for (int i = 0; i < n; i++){
        cin >> inp; m += inp;
        mod[(m%n + n) % n]++;
    }
    int64_t cnt = mod[0]*(mod[0] + 1)/2;
    for (int i = 1; i < n; i++){
        if (mod[i] > 1) cnt += mod[i]*(mod[i] - 1)/2;
    }
    cout << cnt;
    return 0;
}