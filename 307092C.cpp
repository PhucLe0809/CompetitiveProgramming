#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, m; cin >> n >> m;
    vector <int> a(n), b(m);
    for (auto &it:a) cin >> it;
    for (auto &it:b) cin >> it;
    int i = 0, j = 0, cnt = 0;
    while (i < n && j < m){
        while (i < n && j < m && a[i] < b[j]) i++;
        while (i < n && j < m && a[i] > b[j]) j++;
        if (!(i < n && j < m && a[i] == b[j])) continue;
        int k = i;
        while (k < n && a[k] == a[i]) k++;
        int l = j;
        while (l < m && b[l] == b[j]) l++;
        cnt += (k - i) * (l - j);
        i = k; j = l;
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