#include <bits/stdc++.h>

using namespace std; 
int32_t a[105], b[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, y;
    bool check;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        x = *max_element(a, a+n);
        y = *max_element(b, b+n);
        if (x==a[n-1] && y==b[n-1])
            cout << "Yes\n";
        else{
            if (a[n-1]<b[n-1]) swap(a[n-1], b[n-1]);
            check = true;
            for (int i = 0; i < n && check; i++){
                if (b[i]<=a[n-1] && a[i]<=b[n-1]) 
                    swap(a[i], b[i]);
                if (a[i]>a[n-1] || b[i]>b[n-1]){
                    check = false; break;
                }
            }
            if (check) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}