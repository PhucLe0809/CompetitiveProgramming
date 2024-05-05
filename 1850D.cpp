#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n, k; cin >> n >> k;
        vector <int> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp.begin(), inp.end());
        int cnt = 1, answer = 1;
        for (int i = 1; i < n; i++){
            if (inp[i] - inp[i-1] > k) cnt = 1;
            else cnt++;
            answer = max(answer, cnt);
        }
        cout << n - answer << '\n';
    }
    return 0;
}