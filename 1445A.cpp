#include <bits/stdc++.h>

using namespace std; 
int32_t a[105], b[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x;
    bool check;
    while (test--){
        cin >> n >> x;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(a, a+n);
        sort(b, b+n, greater<>());
        check = true;
        for (int i = 0; i<n && check; i++){
            if (a[i]+b[i]>x) check = false;
        }
        if (check) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}