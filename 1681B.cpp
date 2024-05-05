#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, x, topmost;
    while (test--){
        cin >> n; 
        for (int i = 1; i <= n; i++) cin >> inp[i];
        cin >> m; 
        topmost = 1;
        while (m--){
            cin >> x; 
            topmost = (topmost+x)%n;
        }
        if (topmost==0) topmost = n;
        cout << inp[topmost] << '\n';
    }
    return 0;
}