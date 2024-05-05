#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        int x; map <int, int64_t> mp;
        for (int i = 1; i <= n; i++){
            cin >> x; mp[x-i]++;
        }
        int64_t cnt = 0;
        for (auto &it:mp) cnt += it.second*(it.second-1)/2;
        cout << cnt << '\n';
    }
    return 0;
}