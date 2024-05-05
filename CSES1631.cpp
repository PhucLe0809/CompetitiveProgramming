#include <bits/stdc++.h>
#define inf 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int64_t maxx = -inf, sum = 0;
    for (int i = 0; i < n; i++){
        int64_t x; cin >> x;
        maxx = max(maxx, x); sum += x;
    }
    cout << max(2*maxx, sum);
    return 0;
}