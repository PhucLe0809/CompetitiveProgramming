#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int a, b, c;
    while (test--){
        cin >> a >> b >> c;
        if (a+b>=10 || a+c>=10 || b+c>=10) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}