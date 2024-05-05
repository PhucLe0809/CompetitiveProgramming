#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n; 
        vector <int64_t> scan;
        int64_t minn = 1000000007;
        for (int i = 0; i < n; i++){
            int m; cin >> m;
            vector <int64_t> inp(m);
            for (int j = 0; j < m; j++) cin >> inp[j];
            sort(inp.begin(), inp.end());
            minn = min(minn, inp[0]);
            scan.push_back(inp[1]);
        }
        sort(scan.begin(), scan.end());
        int64_t answer = 0;
        for (auto &x:scan) answer += x;
        answer -= scan[0]; answer += minn;
        cout << answer << '\n';
    }
    return 0;
}