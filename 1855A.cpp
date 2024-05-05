#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        int cnt = 0, x;
        for (int i = 1; i <= n; i++){
            cin >> x;
            if (x == i) cnt++;
        }
        cout << (cnt + 1)/2 << '\n';
    }
    return 0;
}