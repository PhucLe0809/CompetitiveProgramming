#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int x, k; cin >> x >> k;
        if (x%k!=0){
            cout << "1\n" << x << '\n';
            continue;
        }
        cout << 2 << '\n';
        cout << k-1 << " " << x-k+1 << '\n';
    }
    return 0;
}