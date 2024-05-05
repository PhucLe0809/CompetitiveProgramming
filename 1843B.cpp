#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector <int64_t> inp(n);
        vector <int64_t> scan;
        int64_t maxx = 0;
        for (int i = 0; i < n; i++){
            cin >> inp[i]; maxx += abs(inp[i]);
            if (inp[i] == 0) continue;
            scan.push_back(inp[i]);
        }
        if (scan.size() == 0){
            cout << 0 << " " << 0 << '\n';
            continue; 
        }
        int cnt = 0;
        int64_t temp = scan.back();
        scan.push_back(temp*(-1));
        for (int i = 1; i < scan.size(); i++){
            if (scan[i]>0 && scan[i-1]<0) cnt++;
        }
        cout << maxx << " " << cnt << '\n';
    }
    return 0;
}