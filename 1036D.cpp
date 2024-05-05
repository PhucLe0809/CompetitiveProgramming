#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> a(n+1);
    for (int i = 1; i <= n; i++){
        int x; cin >> x; a[i] = a[i-1] + x;
    }
    int m; cin >> m;
    vector <int> b(m+1);
    for (int i = 1; i <= m; i++){
        int x; cin >> x; b[i] = b[i-1] + x;
    }
    if (a[n] != b[m]){
        cout << -1 << endl;
        return;
    }
    int i = 1, j = 1, cnt = 0;
    while (i <= n && j <= m){
        if (a[i] == b[j]){
            cnt++; i++; j++;
            continue;
        }
        if (a[i] < b[j]) i++;
        else j++;
    }
    cout << cnt << endl;
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