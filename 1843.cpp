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
        sort(inp.begin(), inp.end());
        int answer = 0;
        for (int i = 0; i < n/2; i++){
            answer += inp[n-i-1] - inp[i];
        }
        cout << answer << '\n';
    }
    return 0;
}