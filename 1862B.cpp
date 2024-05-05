#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    vector <int> scan(1, inp[0]);
    for (int i = 1; i < n; i++){
        if (inp[i] < inp[i-1]) scan.push_back(1);
        scan.push_back(inp[i]);
    }
    cout << scan.size() << endl;
    for (auto &it:scan) cout << it << " "; cout << endl; 
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}