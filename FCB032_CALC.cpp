#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    int a, b, c;
    while (cin >> a >> b >> c){
        vector <int> scan = {a, b, c};
        sort(scan.begin(), scan.end());
        bool check = false;
        do {
            check = check || (scan[0] + scan[1] - scan[2] == 0);
            // cout << scan[0] << " " << scan[1] << " " << scan[2] << endl;
        } while (next_permutation(scan.begin(), scan.end()) && !check);
        (check)?(cout << "yes\n"):(cout << "no\n");
    }
    return 0;
}