#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t t, x, y, one, two, fa, fb;
    fa = fb = 0; one = two = 0;
    while (n--){
        cin >> t >> x >> y;
        if (t==1){
            one++; fa += x;
        }else{
            two++; fb += x;
        }
    }
    if (fa >= 5*one) cout << "LIVE\n"; else cout << "DEAD\n";
    if (fb >= 5*two) cout << "LIVE\n"; else cout << "DEAD\n";
    return 0;
}