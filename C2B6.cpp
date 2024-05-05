#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector <int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 0; i < n; i++) cout << a[i] << " " << b[i] << " ";

    return 0;
}