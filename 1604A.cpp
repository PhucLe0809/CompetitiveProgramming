#include <bits/stdc++.h>

using namespace std; 
int32_t diff[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> x;
            diff[i] = x-(i+1);
        }
        sort(diff, diff+n);
        if (diff[n-1]>0) cout << diff[n-1] << '\n';
        else cout << 0 << '\n';
    }
    return 0;
}