#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n; bool check;
    while (test--){
        cin >> n;
        if (n%2!=0) cout << -1 << '\n';
        else{
            check = true;
            for (int i = 0; 4*i<=n && check; i++){
                if ((n-i*4)%6==0){
                    cout << (n-i*4)/6+i << " ";
                    for (int j = 0; 6*j<=n && check; j++){
                        if ((n-j*6)%4==0){
                            cout << (n-j*6)/4+j << '\n';
                            check = false;
                        }
                    }
                } 
            }
            if (check) cout << -1 << '\n';
        }
    }
    return 0;
}