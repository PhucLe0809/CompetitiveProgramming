#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, d; cin >> n >> d;
    int32_t plus, x;
    plus = 0;
    for (int i = 0; i < n; i++){
        cin >> x; plus += x;
    }
    if (plus+10*(n-1) > d) cout << -1;
    else cout << (d-plus)/5;
    return 0;
}