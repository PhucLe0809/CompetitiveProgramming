#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector <int> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        int answer = INT_MAX;
        for (int i = 1; i < n; i++) answer = min(answer, inp[i] - inp[i-1]);
        if (answer < 0) cout << 0 << '\n';
        else cout << answer/2 + 1 << '\n';
    }
    return 0;
}