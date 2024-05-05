#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector <int> days = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int test; cin >> test;
    while (test--){
        int d, m, y; cin >> d >> m >> y;
        bool check = (m <= 12);
        if (m == 2){
            check = check && (d <= days[m] + (int)((y % 4 == 0 && y % 100 != 0) || (y % 4 == 0 && y % 400 == 0)));
        }else{
            check = check && (d <= days[m]);
        }
        if (check) cout << "TRUE\n"; else cout << "FALSE\n";
    }
    return 0;
}