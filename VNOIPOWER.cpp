#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
vector <int> power(1, 1);

void GOTOHANOI(int t){
    int l, r; cin >> l >> r;
    int x = 0, y = 0, a = l, b = r;
    while (a >= 1) a /= 2, x++;
    while (b >= 1) b /= 2, y++;
    if (y > x){
        cout << "Case #" << t << ": " << y - 1 << endl;
        return;
    }
    for (int j = y - 1; j >= 1; j--){
        int v = pow(r + 0.1, 1.0 / j);
        if (pow(v, j) >= l && pow(v, j) <= r){
            cout << "Case #" << t << ": " << j << endl;
            return;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    for (int i = 0; i < 60; i++) power.push_back(power.back() * 2);
    int t = 1;
    while (test--){
        GOTOHANOI(t); t++;
    }
    return 0;
}