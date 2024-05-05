#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k; string str;
    bool check;
    while (test--){
        cin >> n >> k;
        cin >> str; check = true;
        for (int i = 0; i<k && check; i++){
            if (str[i]!=str[n-i-1]) check = false;
        }
        if (check && 2*k<n) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}