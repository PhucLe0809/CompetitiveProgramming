#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string x, y; cin >> x >> y;
    int n; cin >> n;
    cout << x << " " << y << '\n';
    string a, b;
    while (n--){
        cin >> a >> b;
        if (x==a) x = b;
        else y = b;
        cout << x << " " << y << '\n';
    }
    return 0;
}