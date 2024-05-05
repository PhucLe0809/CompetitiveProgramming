#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t a, b, c;
    while (test--){
        cin >> a >> b >> c;
        if (a>=c) cout << -1 << " " << b;
        else{
            if (a*b<=c) cout << 1 << " " << -1;
            else cout << 1 << " " << b;
        }
        cout << '\n';
    }
    return 0;
}