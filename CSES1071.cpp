#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int64_t x, y; cin >> x >> y;
        int64_t pivot = max(x, y);
        int64_t curr = 1 + pivot*(pivot-1);
        int64_t answer = 0;
        if (x >= y){
            if (x % 2 != 0) answer = curr - (x-y);
            else answer = curr + (x-y);
        }
        if (x <= y){
            if (y % 2 != 0) answer = curr + (y-x);
            else answer = curr - (y-x);
        }
        cout << answer << '\n';
    }
    return 0;
}