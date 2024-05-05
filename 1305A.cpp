#include <bits/stdc++.h>

using namespace std; 
int32_t a[1005], b[1005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int j = 0; j < n; j++) cin >> b[j];
        sort(a, a+n);
        sort(b, b+n);
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << '\n';
        for (int j = 0; j < n; j++) cout << b[j] << " ";
        cout << '\n';
    }
    return 0;
}