#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x, y, a, b, c, d;
    a = b = c = d = 0;
    while (n--){
        cin >> x >> y;
        if (x==0) a++;
        else b++;
        if (y==0) c++;
        else d++;
    }
    cout << min(a, b)+min(c, d);
    return 0;
}