#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int cnt_divisor(int &x){
    int cnt = 0;
    for (int i = 1; i*i <= x; i++){
        if (x % i == 0) cnt += 2;
    }
    cnt -= (int)(sqrt(x) == (int)(sqrt(x)));
    return cnt;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        cout << cnt_divisor(x) << endl;
    }
    return 0;
}