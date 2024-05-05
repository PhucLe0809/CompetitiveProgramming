#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t x, y, z; cin >> x >> y >> z;
    cout << (x+y)/z << " ";
    if (x%z+y%z < z) cout << 0;
    else{
        cout << min(z-x%z, z-y%z);
    }
    return 0;
}