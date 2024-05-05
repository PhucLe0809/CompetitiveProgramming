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
    sort(inp.begin(), inp.end());
    int res = 0;
    int i = 0, j = n-1;
    while (i < j){
        if (inp[i] + inp[j] >= 0){
            res++; i++; j--;
        }else{
            i++;
        }
    }
    cout << res;
    return 0;
}