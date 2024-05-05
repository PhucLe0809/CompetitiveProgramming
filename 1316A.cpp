#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, x, sum;
    while (test--){
        cin >> n >> m;
        sum = 0;
        for (int i = 0; i < n; i++){
            cin >> x; sum += x;
        }
        cout << min(sum, m) << '\n';
    }
    return 0;
}