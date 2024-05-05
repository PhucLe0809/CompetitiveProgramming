#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, y; cin >> m >> y;
    if (!(1 <= m && m <= 12 && y > 0)){
        cout << "INVALID"; return 0;
    }else{
        vector <int> days {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (m != 2) cout << days[m - 1];
        else cout << days[m - 1] + (int)((y % 4 == 0 && y % 100 != 0) || (y % 4 == 0 && y % 400 == 0));
    }
    return 0;
}