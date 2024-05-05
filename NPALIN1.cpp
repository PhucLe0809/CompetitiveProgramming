#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    int n;
    vector <int> scan = {9, 9, 90, 90, 900, 900, 9000, 9000, 90000, 90000, 900000, 900000, 9000000, 9000000, 90000000, 90000000, 900000000, 900000000, 9000000000, 9000000000, 90000000000, 90000000000, 900000000000, 900000000000, 9000000000000};
    while (cin >> n){
        cout << scan[n - 1] << endl;
    }
    return 0;
}