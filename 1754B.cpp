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
        for (int i = 1; i <= n; i++){
            if (i%2!=0)
                cout << n/2+(i+1)/2 << " ";
            else cout << (i/2) << " ";
        }
        cout << '\n';
    }
    return 0;
}