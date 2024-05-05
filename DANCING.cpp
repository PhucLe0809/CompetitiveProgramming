#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    cout << (2*n - 1) + 2*(n-1) - 1 << " " << (n - 2) + (n - 2)*(n - 3);
    return 0;
}