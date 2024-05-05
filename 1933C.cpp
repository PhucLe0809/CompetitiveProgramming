#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool __check(int &a, int &b, int m) {
    if (a == 1 && b == 1)
        return true;

    if (m == 1 && (a == 1 || b == 1))
        return true;

    int one = 1;
    for (int i = 0; i < 21; i++){
        int two = 1;
        for (int j = 0; j < 21; j++){
            if (one * two == m) return true;
            two *= b;
            if (two > m) break;
        }
        one *= a;
        if (one > m) break;
    }

    return false;
}

void GOTOHANOI(){
    int a, b, l; cin >> a >> b >> l;
    int cnt = 0;
    for (int i = 1; i*i <= l; i++){
        if (l % i == 0){
            cnt += (int)(__check(a, b, i)); // --> l/i
            cnt += (int)(__check(a, b, l/i)); // --> i
        }
    }
    if ((int)(sqrt(l)) == sqrt(l)) cnt -= (int)(__check(a, b, (int)sqrt(l)));
    cout << cnt << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }

    return 0;
}