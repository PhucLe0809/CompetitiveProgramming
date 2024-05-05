#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m1, m2, m3, m4, x, y;
    while (test--){
        cin >> n;
        m1 = m2 = m3 = m4 = 0;
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            if (x) {
                if (x < 0) m1 = max(m1, abs(x));
                else m2 = max(m2, x);
            } else{
                if (y < 0) m3 = max(m3, abs(y));
                else m4 = max(m4, y);
            }
        }
        cout << 2*(m1+m2+m3+m4) << '\n';
    }
    return 0;
}