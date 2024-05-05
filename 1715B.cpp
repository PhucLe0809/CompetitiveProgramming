#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t n, k, b, s, m;
    int t;
    while (test--){
        cin >> n >> k >> b >> s;
        if (k*b<=s && s<=k*(b+1)-1){
            for (int i = 0; i < n-1; i++) cout << 0 << " ";
            cout << s << '\n';
        }else{
            m = s-(k*(b+1)-1);
            if (s<k*b || (n-1)*(k-1)<m) cout << -1 << '\n';
            else{
                t = 0;
                while (m!=0){
                    cout << min(m, k-1) << " ";
                    m -= min(m, k-1); t++;
                }
                for (int i = t; i < n-1; i++) cout << 0 << " ";
                cout << k*(b+1)-1 << '\n';
            }
        }
    }
    return 0;
}