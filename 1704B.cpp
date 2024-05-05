#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, x, cnt, minn, maxx;
    while (test--){
        cin >> n >> x;
        vector <int> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        cnt = 0;
        minn = maxx = inp[0];
        for (int i = 0; i < n; i++){
            minn = min(minn, inp[i]);
            maxx = max(maxx, inp[i]);
            if (maxx-minn>2*x){
                cnt++; minn = maxx = inp[i];
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}