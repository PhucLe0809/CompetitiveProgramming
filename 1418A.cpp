#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t x, y, k, n;
    while (test--){
        cin >> x >> y >> k;
        //n*(x-1)+1 = k*(y+1)
        cout << (k*(y+1)-1+(x-1)-1)/(x-1)+k << '\n';
    }
    return 0;
}