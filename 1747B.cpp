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
        if (n==1) cout << "1\n" << "1 2\n";
        else{
            cout << n/2+(n%2!=0) << '\n';
            for (int i = 0; 3*i+1 <= 3*n/2; i++)
                cout << 3*i+1 << " " << 3*n-3*i << '\n';
        }
    }
    return 0;
}