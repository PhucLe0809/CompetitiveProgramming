#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t a, b;
    while (test--){
        cin >> a >> b;
        if (b==1) cout << "NO\n";
        else{
            cout << "YES\n";
            cout << a << " " << a*b << " " << a*(b+1) << '\n';
        }
    }
    return 0;
}