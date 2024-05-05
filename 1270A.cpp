#include <bits/stdc++.h>

using namespace std; 
int32_t a[105], b[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k1, k2;
    while (test--){
        cin >> n >> k1 >> k2;
        for (int i = 0; i < k1; i++) cin >> a[i];
        for (int i = 0; i < k2; i++) cin >> b[i];
        if (*max_element(a, a+k1) > *max_element(b, b+k2))
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}