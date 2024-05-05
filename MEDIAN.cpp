#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1000005

using namespace std;
int inp[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    cout << inp[(n+1)/2] << " ";
    for (int i = 2; i <= m; i++){
        int dis = i / 2;
        if (n % 2 != 0){
            if (i % 2 == 0) cout << inp[(n+1)/2 - dis] << " ";
            else cout << inp[(n+1)/2 + dis] << " ";
        }
        if (n % 2 == 0){
            if (i % 2 != 0) cout << inp[(n+1)/2 - dis] << " ";
            else cout << inp[(n+1)/2 + dis] << " ";
        }
    }
    return 0;
}