#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; test = 1;
    int32_t n, x;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x%2==0) x--;
            cout << x << " ";
        }
        cout << '\n';
    }
    return 0;
}