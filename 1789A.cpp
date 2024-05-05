#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; bool check;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        check = false;
        for (int i = 0; i<n-1 && !check; i++){
            for (int j = i+1; j<n && !check; j++){
                if (__gcd(inp[i], inp[j])<3) check = true;
            }
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}