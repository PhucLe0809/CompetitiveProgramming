#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, m; cin >> n >> m;
    vector <int> a(n), b(m);
    for (auto &it:a) cin >> it;
    for (auto &it:b) cin >> it;
    int i = 0;
    for (auto &it:b){
        while (i < n && a[i] < it) i++;
        cout << i << " ";
    }
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