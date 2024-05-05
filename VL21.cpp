#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int sum = 0; int x = 1;
    while (sum + x <= n){
        sum += x; x++;
    }
    cout << --x;
    return 0;
}