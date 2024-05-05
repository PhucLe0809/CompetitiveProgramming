#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, k;
    while (test--){
        cin >> n >> k;
        if (!(n%2==0 || k==1)) cout << "NO\n";
        else{
            cout << "YES\n";
            for (int i = 1; i <= n; i++){
                for (int j = 1; j <= k; j++){
                    cout << i + (n)*(j-1) << " ";
                }
                cout << '\n';
            }
        }
    }
    return 0;
}