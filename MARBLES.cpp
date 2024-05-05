#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define inf 1e6

using namespace std;

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    vector <int> calc(1, 0);
    int len = 1;
    while (calc.back() + len <= inf){
        calc.push_back(calc.back() + len); len++;
    }
    int n; cin >> n;
    if (binary_search(calc.begin(), calc.end(), n)) cout << "Yes.";
    else cout << "No.";
    return 0;
}