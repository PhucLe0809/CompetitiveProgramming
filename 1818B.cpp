#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n;
    while (test--){
        cin >> n;
        if (n==1){
            cout << 1 << '\n'; continue;
        }
        if (n%2!=0) cout << -1 << '\n';
        else{
            for (int i = 1; i <= n/2; i++){
                cout << 2*i << " " << 2*i-1 << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}