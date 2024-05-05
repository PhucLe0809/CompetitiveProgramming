#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    int cnt = 0;
    while (n <= m){
        cnt++;
        int num = n, sdigit = 0;
        while (num > 0) sdigit += num % 10, num /= 10;
        n += sdigit;
    }
    cout << cnt;
    return 0;
}