#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    int neg = 0, pos = 0, zero = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        pos += (int)(x > 0);
        neg += (int)(x < 0);
        zero += (int)(x == 0);
    }
    if (zero != 0 || neg % 2 != 0) cout << 0 << endl;
    else{
        cout << 1 << endl;
        cout << 1 << " " << 0 << endl;
    }
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