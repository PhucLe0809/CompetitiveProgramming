#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    char s[n + 2]; s[n + 1] = 'C';
    for (int i = 1; i <= n; ++i) cin >> s[i];
    int pt1 = 1, pt2 = 1, ans = 0;
    while (s[pt1] == 'B') ++pt1, ++pt2;
    while (pt1 <= n) {
        int cntA = 0, cntB = 0;
        while (s[pt2] == 'A') ++pt2, ++cntA;
        while (s[pt2] == 'B') ++pt2, ++cntB;
        if (s[pt2 - 1] == 'B') ans += pt2 - pt1 - 1;
        if (cntB) pt1 = pt2 - 1;
        else break;
    }
    cout << ans << '\n';
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