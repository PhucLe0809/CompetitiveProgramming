#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, a, b; cin >> n >> a >> b;
    for (int i = 0; i < n; i++) cin >> inp[i];
    sort(inp, inp+n);
    cout << inp[b]-inp[b-1];
    return 0;
}