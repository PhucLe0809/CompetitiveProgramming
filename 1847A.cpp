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
        vector <int> scan(n-1);
        for (int i = 0; i < n-1; i++) scan[i] = abs(inp[i] - inp[i+1]);
        int answer = accumulate(scan.begin(), scan.end(), 0);
        sort(scan.begin(), scan.end());
        for (int i = n-2; k > 1; i--, k--) answer -= scan[i];
        cout << answer << '\n';
    }
    return 0;
}