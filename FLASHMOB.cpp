#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int pivot, n; cin >> pivot >> n;
    int tick[35];
    fill(tick, tick + 35, false);
    for (int i = 0; i < n; i++){
        tick[pivot] = true;
        int a, b; cin >> a >> b;
        if (b == pivot) pivot = a;
    }
    int cnt = 0;
    for (int i = 0; i < 35; i++) cnt += (int)tick[i];
    cout << pivot << " " << cnt;
    return 0;
}