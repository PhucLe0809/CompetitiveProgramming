#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, y; cin >> n >> y;
    int days[15] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    days[2] += (int)((y % 4 == 0 && y % 100 != 0) || (y % 4 == 0 && y % 400 == 0));
    int sum = 0, m = 0;
    while (sum + days[m] <= n){
        sum += days[m]; m++;
    }
    cout << n- sum << " " << m;
    return 0;
}