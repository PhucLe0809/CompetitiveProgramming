#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, s; cin >> n >> s;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    int sum = 0, res = 0;
    for (int j = 0, i = 0; j < n; j++){
        sum += inp[j];
        while (sum > s) sum -= inp[i++];
        res = max(res, j - i + 1);
    }
    cout << res << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; //cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}