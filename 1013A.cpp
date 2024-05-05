#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x;
    int32_t one = 0;
    for (int i = 0; i < n; i++){
        cin >> x; one += x;
    }
    int32_t two = 0;
    for (int i = 0; i < n; i++){
        cin >> x; two += x;
    }
    if (two>one) cout << "No\n";
    else cout << "Yes\n";
    return 0;
}