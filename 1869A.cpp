#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        int calc, x; calc = 0;  
        int zero = 0;
        for (int i = 0; i < n; i++){
            cin >> x; calc ^= x;
            if (!x) zero++;
        }
        cout << 4 << '\n';
        cout << 1 << " " << n << '\n';
        cout << 1 << " " << n-(n%2!=0) << '\n';
        cout << n-(n%2!=0) << " " << n << '\n';
        cout << 1 << " " << n << '\n';
    }
    return 0;
}