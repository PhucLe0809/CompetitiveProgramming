#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k;
    while (test--){
        cin >> n >> k;
        if (k%2==1){
            cout << "YES\n";
            for (int i=1; i<=n; i+=2)
                cout << i+1 << " " << i << '\n';
        }else{
            if (k%4==0){
                cout << "NO\n"; continue;
            }
            cout << "YES\n";
            for (int i=1; i<=n; i+=2){
                if ((i+1)%4==2) cout << i+1 << " " << i << '\n';
                else cout << i << " " << i+1 << '\n';
            }
        }
    }
    return 0;
}