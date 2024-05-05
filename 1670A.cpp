#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, nev;
    bool check;
    while (test--){
        cin >> n; nev = 0;
        for (int i = 1; i <= n; i++){
            cin >> inp[i];
            if (inp[i]<0) nev++;
        }
        for (int i = 1; i <= nev; i++) inp[i] = -abs(inp[i]);
        for (int i = nev+1; i <= n; i++) inp[i] = abs(inp[i]);
        check = true;
        for (int i = 1; i < n && check; i++){
            if (inp[i+1]<inp[i]) check = false;
        }        
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}