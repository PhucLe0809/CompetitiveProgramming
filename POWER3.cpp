#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define inf 1e18

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector <int> scan;
    int x = 0;
    while (x * x * x <= inf) scan.push_back(x*x*x), x++; 
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        if (binary_search(scan.begin(), scan.end(), n)) cout << "YES\n"; else cout << "NO\n";
    }
    return 0;
}