#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    int inc = 0, infront = inp[0];
    for (int i = 1; i < n; i++){
        if (inp[i] > infront){
            inc++; infront = inp[i];
        }
    }
    int dec = 0, numfront = inp[0];
    for (int i = 1; i < n; i++){
        if (inp[i] < numfront){
            dec++; numfront = inp[i];
        }
    }
    cout << inc << " " << dec;
    return 0;
}