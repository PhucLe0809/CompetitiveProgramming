#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b; cin >> a >> b;
    if (abs(a-b)>1 || (a==0&&b==0) || (a==0&&b!=1) || (a!=1&&b==0)) cout << "NO\n";
    else cout << "YES\n";
    return 0;
}