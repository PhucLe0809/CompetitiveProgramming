#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> fibo = {1, 2};
    int len = 2;
    while (fibo.back() < n){
        fibo.push_back(fibo[len - 1] + fibo[len - 2]);
        len++;
    }
    vector <int> scan;
    for (int i = len-1; i >= 0; i--){
        if (n >= fibo[i]){
            scan.push_back(fibo[i]); n -= fibo[i];
        }
    }
    cout << scan.size() << endl;
    for (auto &it:scan) cout << it << " ";
    return 0;
}