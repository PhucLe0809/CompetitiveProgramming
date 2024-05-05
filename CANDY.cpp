#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> prefix(n+1);
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        prefix[i] = prefix[i-1] + x;
    }
    int dis = prefix[n];
    for (int i = 1; i <= n; i++){
        dis = min(dis, abs(prefix[i] - (prefix[n] - prefix[i])));
    }
    cout << dis;
    return 0;
}