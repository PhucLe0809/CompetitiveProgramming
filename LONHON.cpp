#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b; cin >> a >> b;
    if (a >= b) cout << 0;
    else{
        int cnt = 0;
        while (a <= b){
            a = 3*a; b = 2*b; cnt++;
        }
        cout << cnt;
    }
    return 0;
}