#include <bits/stdc++.h>

using namespace std; 
int32_t a[3], b[3];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    while (test--){
        cin >> a[0] >> a[1];
        cin >> b[0] >> b[1];
        if (a[0]>a[1]) swap(a[0], a[1]);
        if (b[0]>b[1]) swap(b[0], b[1]);
        if (a[1]!=b[1]) cout << "No\n";
        else{
            if (a[0]+b[0]!=a[1]) cout << "No\n";
            else cout << "Yes\n";
        }
    }
    return 0;
}