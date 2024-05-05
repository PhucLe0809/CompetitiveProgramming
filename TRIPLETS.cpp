#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector <int> inp(6);
    for (auto &it:inp) cin >> it;
    int a = 0, b = 0;
    for (int i = 0; i < 3; i++){
        if (inp[i] > inp[i+3]) a++;
        if (inp[i] < inp[i+3]) b++;
    }
    cout << a << " " << b;
    return 0;
}