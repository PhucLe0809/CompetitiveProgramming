#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int64_t inp[maxarray], lft[maxarray], rght[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, q; cin >> n >> q;
    lft[0] = inp[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> inp[i];
        if (inp[i]<inp[i-1]) lft[i] = lft[i-1]+(inp[i-1]-inp[i]);
        else lft[i] = lft[i-1];
    }
    rght[n+1] = 0;
    for (int i = n; i >= 1; i--){
        if (inp[i]<inp[i+1]) rght[i] = rght[i+1]+(inp[i+1]-inp[i]);
        else rght[i] = rght[i+1];
    }
    int32_t l, r;
    while (q--){
        cin >> l >> r;
        if (l < r) cout << lft[r]-lft[l] << '\n';
        else cout << abs(rght[l]-rght[r]) << '\n';
    }
    return 0;
}