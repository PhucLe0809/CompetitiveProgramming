#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, l, r; cin >> n >> l >> r;
    int64_t minn, maxx;
    minn = (pow(2, l)-1)+(n-l);
    maxx = (pow(2, r)-1)+(n-r)*pow(2, r-1);
    cout << minn << " " << maxx << '\n';
    return 0;
}