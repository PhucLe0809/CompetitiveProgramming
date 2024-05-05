#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    if (n%2!=0) cout << 0 << '\n';
    else{
        if (n%4==0) cout << n/4-1 << '\n';
        else cout << n/4 << '\n';
    }
    return 0;
}