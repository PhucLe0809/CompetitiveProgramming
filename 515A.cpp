#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t a, b, s;
    cin >> a >> b >> s;
    int64_t m = abs(a)+abs(b);
    if (m>s) cout << "No\n";
    else if ((s-m)%2!=0) cout << "No\n";
        else cout << "Yes\n";
    return 0;
}