#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t left, right;
    int32_t x, y;
    left = right = 0;
    while (n--){
        cin >> x >> y;
        if (x>0) left++;
        else right++;
    }
    if (right<=1 || left<=1) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}