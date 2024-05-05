#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 1; i < n; i++) cin >> inp[i];
    sort(inp+1, inp+n);
    for (int i = 1; i < n; i++){
        if (inp[i]!=i){
            cout << i; break;
        }
    }
    if (inp[n-1]!=n) cout << n;
    return 0;
}