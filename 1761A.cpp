#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, a, b;
    while (test--){
        cin >> n >> a >> b;
        if (a==b && a==n) cout << "Yes\n";
        else{
            if (n-(a+b)<2) cout << "No\n";
            else cout << "Yes\n";
        }
    }
    return 0;
}