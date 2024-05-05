#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n; 
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp, inp+n);
        cout << min(inp[n-2]-1, n-2) << '\n';
    }
    return 0;
}