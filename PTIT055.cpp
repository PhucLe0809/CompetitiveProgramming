#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < 31; i++){
        cout << n << " x " << i << " = " << n*i << endl;
    }
    return 0;
}