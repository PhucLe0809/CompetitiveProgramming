#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1000005

using namespace std;
int mp[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    fill(mp, mp + maxarray, 0);
    for (int i = 0; i < n; i++){
        int x; cin >> x; mp[x]++;
    }
    int cnt = 0;
    for (int i = 0; i < maxarray; i++) cnt += (int)(mp[i] == 1);
    cout << n - cnt;
    return 0;
}