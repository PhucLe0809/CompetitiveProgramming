#include <bits/stdc++.h>

using namespace std; 
int32_t a[105], b[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; bool check;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(a, a+n); sort(b, b+n);
        check = true;
        for (int i = 0; i<n && check; i++){
            if (a[i]>b[i] || b[i]-a[i]>1) check = false;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}