#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    cout << m+(n-1) << '\n';
    for (int i = 1; i <= m; i++) cout << 1 << " " << i << '\n';
    for (int i = 2; i <= n; i++) cout << i << " " << m << '\n';
    return 0;
}