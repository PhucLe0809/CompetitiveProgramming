#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, a, b, c, d;
    bool check;
    while (test--){
        cin >> n >> m;
        check = false;
        for (int i = 0; i < n; i++){
            cin >> a >> b >> c >> d;
            if (b==c) check = true;
        }
        if (m%2!=0) check = false;
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}