#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    if (n == 1){
        cout << 0 << endl; return;
    }
    int i = 1, j = n-2, a = inp[0], b = inp[n-1];
    int answer = (a == b)?(2):(0);
    while (i <= j){
        if (a < b) a += inp[i], i++;
        else b += inp[j], j--;
        answer = (a == b)?(i + n - j - 1):(answer);
    }
    cout << answer << endl;
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