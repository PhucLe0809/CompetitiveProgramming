#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    int l, r;
    while (cin >> l >> r){
        int cnt = 0;
        for (int n = l; n <= r; n++){
            int num = n;
            int m = 0;
            while (num != 0){
                m = m*10 + num % 10; 
                num /= 10;
            }
            cnt += (int)(n == m);
        }
        cout << cnt << endl;
    }
    return 0;
}