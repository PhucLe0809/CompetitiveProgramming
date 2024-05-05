#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n;
    while (test--){
        cin >> n;
        if (n==1) {cout << 1 << '\n'; continue; }
        if (n==2) {cout << 2 << " " << 1 << '\n'; continue; }
        for (int i = 2; i <= n; i += 2) cout << i << " ";
        cout << 1 << " ";
        for (int i = n-(n%2==0); i > 1; i -= 2) cout << i << " ";
        cout << '\n'; 
    }
    return 0;
}