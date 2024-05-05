#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, n, k; cin >> m >> n >> k;
    int a = m / 2, b = n;
    k -= m % 2;
    if (k > 0){
        if (a > b) k -= (a - b) * 2;
        else k -= (b - a);
        a = b = min(a, b);
        while (k > 0){
            k -= 3; a--;
        }        
    }
    cout << max(min(a, b), 0LL);
    return 0;
}