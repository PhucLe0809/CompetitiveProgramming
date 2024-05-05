#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, a, b;
    while (test--){
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> inp[i];
        a = b = 0;
        inp[0] = 0; inp[n+1] = 1440;
        for (int i = 1; i <= n+1; i++){
            if (inp[i]-inp[i-1]>=120 && inp[i]-inp[i-1]<240) a++;
            else if (inp[i]-inp[i-1]>=240) b++;
        }
        if (a>1 || b>0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}