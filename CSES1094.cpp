#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    int64_t answer = 0;
    for (int i = 1; i < n; i++){
        if (inp[i-1] <= inp[i]) continue;
        answer += inp[i-1] - inp[i];
        inp[i] = inp[i-1];
    }
    cout << answer;
    return 0;
}