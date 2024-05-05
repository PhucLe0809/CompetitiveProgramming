#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string x, y; cin >> x >> y;
    bool check = true;
    for (int i = 0; i<x.size() && check; i++){
        if (y[i]>x[i]) check = false;
    }
    if (check) cout << y;
    else cout << -1;
    return 0;
}