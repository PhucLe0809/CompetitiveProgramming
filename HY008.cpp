#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            vector <int> scan;
            for (int j = 0; j < i; j++) scan.push_back(inp[j]);
            bool check = true;
            for (int j = 0; j < n && check; j += i){
                vector <int> sub;
                for (int t = j; t < j + i; t++) sub.push_back(inp[t]);
                check = check && (scan == sub);
            }
            if (check){
                cout << i; return 0;
            }
        }
    }
    return 0;
}