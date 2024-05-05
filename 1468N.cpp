#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int c[4];
    int a[9];
    while (test--){
        for (int i = 0; i < 3; i++) cin >> c[i];
        for (int i = 0; i < 5; i++) cin >> a[i];
        c[0] -= a[0]; c[1] -= a[1]; c[2] -= a[2];
        if (c[0]>0){
            if (c[0]>=a[3]){
                c[0] -= a[3]; a[3] = 0;
            }else{
                a[3] -= c[0]; c[0] = 0;
            }
        }
        if (c[1]>0){
            if (c[1]>=a[4]){
                c[1] -= a[4]; a[4] = 0;
            }else{
                a[4] -= c[1]; c[1] = 0;
            }
        }
        c[2] -= (a[3]+a[4]);
        if (c[0]<0 || c[1]<0 || c[2]<0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}