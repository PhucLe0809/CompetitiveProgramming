#include <bits/stdc++.h>

using namespace std; 
int32_t inp[1005], scan[1005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; 
    while (test--){
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> inp[i];
        if (n==1){
            cout << -1 << '\n'; continue;
        }
        iota(scan, scan+n+1, 0);
        for (int i = 1; i < n; i++){
            if (inp[i]==scan[i]){
                swap(scan[i], scan[i+1]);
            }
        }
        if (scan[n]==inp[n]) swap(scan[n], scan[n-1]);
        for (int i = 1; i <= n; i++) cout << scan[i] << " ";
        cout << '\n';
    }
    return 0;
}