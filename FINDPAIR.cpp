#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, x; cin >> n >> x;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    int i = 0, j = n-1;
    while (i < j){
        if (inp[i] + inp[j] == x){
            cout << ++i << " " << ++j << endl;
            return;
        }
        if (inp[i] + inp[j] < x) i++;
        else j--;
    }
    cout << "No solution" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; //cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}