#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int dist = LONG_MAX;
    for (int i = 1; i*i <= n; i++){
        if (n % i == 0){
            if (dist > i + n/i - 2){
                dist = i + n/i - 2;
            }
        }
    }
    cout << dist;
    return 0;
}