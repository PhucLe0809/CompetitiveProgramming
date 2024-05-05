#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> tick(5); int s = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        s += x; tick[x%3]++;
    }
    if (s % 3 == 0){
        cout << 0 << endl;
        return;
    }
    if (s % 3 == 2){
        cout << 1 << endl;
        return;
    }
    if (tick[1] != 0){
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
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