#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    int x;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> x; mp[x]++;
    }
    int tmp = 0;
    for (auto it:mp) tmp = max(tmp, it.second);
    int g = tmp/k;
    if (tmp%k) g++;
    int d = (g*k)*mp.size();
    int res;
    if (d-n<0) res=0; else res=d-n;
    cout << res;
    return 0;
}