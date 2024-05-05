#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, k, x; cin >> n >> k >> x;
    if (k > x+1 || n < k){
        cout << -1 << endl; return;
    }
    int answer = (k - 1) * k / 2;
    answer += (k == x)?((n - k)*(x - 1)):((n - k)*x);
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