#include <bits/stdc++.h>

using namespace std; 
int64_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; bool check;
    while (test--){
        cin >> n; 
        for (int i = 0; i < n; i++) cin >> inp[i];
        for (int64_t i = 0; i < n-1; i++){
            inp[i+1] += (inp[i]-min(inp[i], i));
            inp[i] = min(inp[i], i);
        }
        check = true;
        for (int i = 1; i<n && check; i++){
            if (inp[i] <= inp[i-1]) check = false;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}