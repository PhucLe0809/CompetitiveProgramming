#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    int d = inp[1]-inp[0]; bool check = true;
    for (int i = 2; i < n && check; i++){
        check = (inp[i]-inp[i-1]==d);
    }
    if (check) cout << inp[n-1]+d;
    else cout << inp[n-1];
    return 0;
}