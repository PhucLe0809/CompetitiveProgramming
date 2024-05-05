#include <bits/stdc++.h>

using namespace std; 
int32_t inp[1005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, l, r;
    while (test--){
        cin >> n; 
        for (int i = 0; i < n; i++) cin >> inp[i];
        l = r = 0;
        for (int i = 0; i < n; i++){
            if (inp[i]==1) l++;
            else break;
        }
        for (int i = n-1; i > -1; i--){
            if (inp[i]==1) r++;
            else break;
        }
        cout << max(n-(l+r)+1, 0) << '\n';
    }
    return 0;
}