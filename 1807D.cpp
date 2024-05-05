#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int64_t inp[maxarray], prefix[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, q;
    int64_t l, r, k, sum, temp;
    while (test--){
        cin >> n >> q;
        prefix[0] = sum = 0;
        for (int i = 1; i <= n; i++){
            cin >> inp[i];
            sum += inp[i];
            prefix[i] = prefix[i-1]+inp[i];
        }
        while (q--){
            cin >> l >> r >> k;
            temp = sum-(prefix[r]-prefix[l]+inp[l])+(l-r+1)*k;
            if (temp%2!=0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}