#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    vector <int> fibo = {1, 1};
    for (int i = 0; i < 91; i++) fibo.push_back(fibo.back() + *(--(--fibo.end())));
    while (test--){
        int n; cin >> n;
        cout << fibo[n] << endl;
    }
    return 0;
}