#include <bits/stdc++.h>
#define endl '\n'
#define maxarray 100005
#define inf 1000000007

using namespace std;
int inp[maxarray], scan[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> inp[i];
    scan[0] = inp[0];
    int res = 1;
    for (int i = 1; i < n; i++){
        int pos = lower_bound(scan, scan + res, inp[i]) - scan;
        scan[pos] = inp[i];
        res = max(res, pos + 1);
    }
    cout << res;
    return 0;
}