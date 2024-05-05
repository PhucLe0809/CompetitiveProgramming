#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t a, b; cin >> a >> b;
    int64_t cnt = 0;
    while (a != b){
        if (b%a == 0) {cnt += (b/a-1); break;}
        if (a%b == 0) {cnt += (a/b-1); break;}
        {
            cnt += max(a,b)/min(a,b);
            if (max(a,b) == a) a -= b*(max(a,b)/min(a,b));
            else b -= a*(max(a,b)/min(a,b));
        }
    }
    cout << cnt;
    return 0;
}