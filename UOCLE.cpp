#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1000005

using namespace std;
int pre[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    fill(pre, pre + maxarray, 1);
    for (int i = 3; 2 * i < maxarray; i++){
        if (i % 2 == 0) continue;
        for (int j = 2*i; j < maxarray; j += i){
            pre[j] = i;
        }
    }
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        cout << pre[n] << endl;
    }
    return 0;
}