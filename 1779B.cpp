#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--){
        cin >> n;
        if (n==3) cout << "NO\n";
        else{
            cout << "YES\n";
            if (n%2==0){
                for (int i = 0; i < n ; i++){
                    if (i%2==0) cout << 1 << " ";
                    else cout << -1 << " ";
                }
            }else{
                for (int i = 0; i < n; i++){
                    if (i%2==0) cout << (n/2-1) << " ";
                    else cout << -(n/2) << " ";
                }
            }
            cout << '\n';
        }
    }
    return 0;
}