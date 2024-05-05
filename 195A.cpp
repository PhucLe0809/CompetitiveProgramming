#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b, c; cin >> a >> b >> c;
    int res = a*c - b*c;
    cout << max(int(ceil(res*1.0/b)), 0);
    return 0;
}