#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> prefix(n+1);
    for (int i = 1; i <= n; i++){
        int x; cin >> x; prefix[i] = prefix[i-1] + x;
    }
    int len = 0;
    for (int t = 1; t < n; t++){
        int delta = prefix[t-1];
        int i = t, j = t + 1;
        while (j <= n){
            if (i == j){ j++; continue; }
            if (prefix[j] - 2 * prefix[i] == -delta){
                len = max(len, j - t + 1);
                i++; j++; continue;
            }
            if (prefix[j] - 2 * prefix[i] < -delta) j++;
            else i++;
        }
    }
    cout << len << endl;
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