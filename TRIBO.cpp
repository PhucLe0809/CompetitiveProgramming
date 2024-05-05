#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define inf 1e9

using namespace std;

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    vector <int> tribo = {0, 0, 1};
    int len = 3;
    while (tribo[len - 1] + tribo[len - 2] + tribo[len - 3] <= inf){
        int calc = tribo[len - 1] + tribo[len - 2] + tribo[len - 3];
        tribo.push_back(calc); len++;
    }
    int n;
    while (cin >> n){
        auto it = lower_bound(tribo.begin(), tribo.end(), n);
        cout << *it << endl;
    }
    return 0;
}