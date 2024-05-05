#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1000005

using namespace std;
double calc[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    calc[0] = 0;
    for (int i = 1; i < maxarray; i++) calc[i] = calc[i-1] + 1.0/(2*i - 1);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        cout << fixed << setprecision(5) << calc[n] << endl;
    }
    return 0;
}