#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        if (n <= 4) cout << "Bob\n";
        else cout << "Alice\n";
    }
    return 0;
}