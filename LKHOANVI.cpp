#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> scan(n);
    iota(scan.begin(), scan.end(), 1);
    do {
        for (auto &it:scan) cout << it << " ";
        cout << endl;
    } while (next_permutation(scan.begin(), scan.end()));
    return 0;
}