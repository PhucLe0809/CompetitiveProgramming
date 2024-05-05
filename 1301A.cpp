#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string a, b, c;
    bool check;
    while (test--){
        cin >> a >> b >> c;
        check = true;
        for (int i = 0; i<a.size() && check; i++){
            if (a[i]!=c[i] && b[i]!=c[i]) check = false;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}