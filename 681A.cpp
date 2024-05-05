#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str;
    int32_t n, m;
    bool check = false;
    while (test--){
        cin >> str >> n >> m;
        if (n >= 2400 && m > n) check = true;
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}