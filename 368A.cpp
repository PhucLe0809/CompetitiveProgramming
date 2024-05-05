#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, d; cin >> n >> d;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    int m; cin >> m;
    sort(inp.begin(), inp.end());
    int total = 0;
    for (int i = 0; i < min(n, m); i++) total += inp[i];
    if (n>=m) cout << total;
    else{
        cout << total + (n-m)*d;
    }
    return 0;
}