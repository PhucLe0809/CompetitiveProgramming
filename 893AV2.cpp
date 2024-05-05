#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int a, b, c;
    while (test--){
        cin >> a >> b >> c;
        if (a == b){
            if (c % 2 != 0) cout << "First\n"; else cout << "Second\n";
        }else{
            if (c % 2 == 0){
                if (a > b) cout << "First\n"; else cout << "Second\n";
            }else{
                if (a >= b) cout << "First\n"; else cout << "Second\n";
            }
        }
    }
    return 0;
}