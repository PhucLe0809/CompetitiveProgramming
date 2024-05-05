#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1000005

using namespace std;
int divi[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    fill(divi, divi + maxarray, 2);
    divi[1] = 1;
    for (int i = 2; i < maxarray/2; i++){
        for (int j = 2*i; j < maxarray; j += i){
            divi[j] += 1LL;
        }
    }
    for (int t = 1; t <= test; t++){
        int n, k; cin >> n >> k;
        int res = 0;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            res += (int)(divi[x] < k);
        }
        cout << "Case #" << t << ": " << res << endl;
    }
    return 0;
}