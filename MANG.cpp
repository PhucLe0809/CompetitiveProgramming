#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a += x;
        if (x % 2 != 0) b++;
        if (x > 0) c = x;
    }
    cout << a << endl << b << endl << c;
    return 0;
}