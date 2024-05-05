#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, m; cin >> n >> m;
    vector <int> a(n), b(m);
    for (auto &it:a) cin >> it;
    for (auto &it:b) cin >> it;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    while (i < n && j < m){
        if (a[i] <= b[j]) cout << a[i++] << " ";
        else cout << b[j++] << " ";
    }
    while (i < n) cout << a[i++] << " ";
    while (j < m) cout << b[j++] << " ";
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