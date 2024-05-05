#include <bits/stdc++.h>

using namespace std; 
int32_t a[5];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    while (test--){
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        if (a[2]-(a[0]+a[1])<2){
            cout << "Yes\n"; continue;
        }
        if (a[1]-a[0]>1) cout << "No\n";
        else{
            if (a[2]-(a[0]+a[1])<2) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}