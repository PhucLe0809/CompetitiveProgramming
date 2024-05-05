#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int64_t> inp(n+1);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    vector <int64_t> prefixsum(n+1), prefixmin(n+1);
    for (int i = 1; i <= n; i++){
        prefixsum[i] = prefixsum[i-1] + inp[i];
        prefixmin[i] = min(prefixmin[i-1], prefixsum[i]);
    }   
    int64_t answer = LONG_MIN;
    for (int i = 1; i <= n; i++){
        answer = max(answer, prefixsum[i] - prefixmin[i-1]);
    }
    cout << answer;
    return 0;
}