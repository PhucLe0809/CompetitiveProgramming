#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t x, y; cin >> x >> y;
    int64_t a = (y>0)?(y+abs(x)):(y-abs(x));
    int64_t b = (x>0)?(x+abs(y)):(x-abs(y));
    if (0 < b) cout << 0 << " " << a << " " << b << " " << 0;
    else cout << b << " " << 0 << " " << 0 << " " << a;
    return 0;
}