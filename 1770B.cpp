#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, k, j, d, t, m;
    while (test--){
        cin >> n >> k;
        if (k==2){
            for (int i = 1; i <= n; i++){
                if (i%2!=0) cout << n-i/2 << " ";
                else cout << i/2 << " ";
            }
            continue;
        }
        for (int i = n; i > n-k+1; i--) cout << i << " ";
        cout << 1 << " "; m = d = t = 1;
        j = n-k+1;
        while (t<=n-k){
            d++;
            if (d%k==0) { cout << m+1 << " "; d=1; m++;}
            else { cout << j << " "; j--; }
            t++;
        }
        cout << '\n';
    }
    return 0;
}