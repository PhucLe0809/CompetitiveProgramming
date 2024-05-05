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
        int t;
        for (t = n-1; t>0 && inp[t] >= inp[t-1]; t--);
        if (t == 0) cout << 0 << '\n';
        else cout << *max_element(inp.begin(), inp.begin()+t) << '\n';
    }
    return 0;
}