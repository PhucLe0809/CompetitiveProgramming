#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, a, b;
    while (test--){
        cin >> n >> a >> b;
        if (n<=a){ cout << 1 << '\n'; continue; }
        if (a<=b){
            cout << int(ceil(n*1.0/a)) << '\n';
        }else{
            cout << 1 << '\n';
        }
    }
    return 0;
}