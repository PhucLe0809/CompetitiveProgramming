#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++) cin >> inp[i];
    inp[0]--;
    for (int i = 1; i < n; i++){
        inp[i] = max(inp[i]-i-1, inp[i-1]+1);
    }
    for (int i = 0; i < n; i++) cout << inp[i] << '\n';
    return 0;
}