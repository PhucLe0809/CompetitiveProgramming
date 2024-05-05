#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        int a, b, cnt = 0;
        for (int i = 0; i < n; i++){
            cin >> a >> b;
            if (a > b) cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}