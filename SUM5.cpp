#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1000005

using namespace std;
double pre[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    pre[0] = 0; pre[1] = 1;
    for (int i = 2; i < maxarray; i++) pre[i] += pre[i-1] + 1.0 / i;
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        cout << fixed << setprecision(5) << pre[n] << endl;
    }
    return 0;
}