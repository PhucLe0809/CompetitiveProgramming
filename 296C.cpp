#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, m, k; cin >> n >> m >> k;
    vector <int> inp(n+2);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    vector <tuple<int, int, int>> oper(m+1);
    for (int i = 1; i <= m; i++){
        cin >> get<0>(oper[i]) >> get<1>(oper[i]) >> get<2>(oper[i]);
    }

    vector <int> dif(m+2);
    while (k--){
        int l, r; cin >> l >> r;
        dif[l]++; dif[r+1]--;
    }
    for (int i = 0; i < n; i++){
        inp[i] = inp[i+1] - inp[i];
    }
    for (int i = 1; i <= m; i++){
        dif[i] += dif[i-1];
        int l = get<0>(oper[i]);
        int r = get<1>(oper[i]);
        int x = get<2>(oper[i]) * dif[i];
        inp[l - 1] += x; inp[r] -= x;

        // for (int i = 0; i <= n; i++) cout << inp[i] << " "; cout << endl;
    }
    cout << inp[0] << " ";
    for (int i = 1; i < n; i++){
        inp[i] += inp[i-1];
        cout << inp[i] << " ";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }

    return 0;
}