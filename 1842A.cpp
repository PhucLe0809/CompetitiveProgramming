#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n, m; cin >> n >> m;
        int64_t one, two; one = two = 0;
        int x;
        for (int i = 0; i < n; i++){
            cin >> x; one += x;
        }
        for (int i = 0; i < m; i++){
            cin >> x; two += x;
        }
        if (one == two) cout << "Draw\n";
        else{
            if (one > two) cout << "Tsondu\n";
            else cout << "Tenzing\n"; 
        } 
    }
    return 0;
}