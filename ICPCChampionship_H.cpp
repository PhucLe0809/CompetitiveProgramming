// #pragma GCC target ("avx2")
// #pragma GCC optimize ("03")
// #pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> one, zero;
    int res = 0, a = 0, b = 0, co = 0, cz = 0;
    for (int i = 0; i < n; i++){
        string str; cin >> str;
        int cnt = 0;
        for (auto &it:str) cnt += (it == '1');
        int x = cnt, y = str.size() - cnt;
        one.push_back(x - y); zero.push_back(y - x);
        int temp = min(x, y);
        res += temp;
        if (x == y) continue;
        if (temp == x) a++, co += temp; else b++, cz += temp;
    }
    if (a == n && co) res += *min_element(zero.begin(), zero.end());
    if (b == n && cz) res += *min_element(one.begin(), one.end());
    cout << res << endl;
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