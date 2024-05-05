#include <bits/stdc++.h>

using namespace std;

int64_t solve(int64_t n){
    if (n == 0) return 0;
    if (n%2 == 0) return 2*solve(n/2)+n/2;
    else return 2*solve(n/2)+n/2+1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n; cin >> n;
    cout << solve(n-1);
    return 0;
}