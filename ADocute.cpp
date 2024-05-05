#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n; 
    while (test--){
        cin >> n;
        vector <int64_t> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        vector <int64_t> scan;
        scan.push_back(inp[0]);
        for (int i = 1; i < n; i++){
            if (inp[i]*inp[i-1] > 0) scan.back() = max(scan.back(), inp[i]);
            else scan.push_back(inp[i]);
        }
        int64_t answer = 0;
        for (auto &it:scan) answer += it;
        cout << answer << '\n';
    }
    return 0;
}