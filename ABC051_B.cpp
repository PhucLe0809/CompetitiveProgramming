#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int k, s; cin >> k >> s;
    int cnt = 0;
    for (int a = 0; a <= k; a++){
        for (int b = 0; b <= k; b++){
            int c = s - a - b;
            if (c >= 0 && c <= k) cnt++;
        }
    }
    cout << cnt;
    return 0;
}