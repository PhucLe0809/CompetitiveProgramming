#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int a, b; cin >> a >> b;
    cout << (a / __gcd(a, b)) * (b / __gcd(a, b)) << endl;
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