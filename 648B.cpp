#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin>>n;
    vector <int> inp(2*n);
    for (auto &it:inp) cin >> it;
    sort(inp.begin(), inp.end());
    for (int i = 0; i < n; i++){
        cout << inp[i] << " " << inp[2*n-i - 1] << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}