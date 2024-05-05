#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int sum = 0;
    for (int i = 1; i <= 3*n+1; i++){
        if (i % 2 != 0) sum += i; else sum -= i;
    }
    cout << sum;
    return 0;
}