#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    if (!(n > 0 && n <= 100000)){
        cout << "INVALID"; return 0;
    }
    if (n % 4 == 0){
        if (n % 100 != 0 || n % 400 == 0) cout << "YES";
        else cout << "NO";
    } else cout << "NO";
    return 0;
}