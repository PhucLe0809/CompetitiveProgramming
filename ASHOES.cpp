#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    map <int, int> left;
    for (int i = 0; i < n; i++){
        int x; cin >> x; left[x]++;
    }
    map <int, int> right;
    for (int i = 0; i < n; i++){
        int x; cin >> x; right[x]++;
    }
    int cnt = 0;
    for (auto &it:left){
        cnt += min(it.second, right[it.first]);
    }
    cout << 2*n - 2*cnt;
    return 0;
}