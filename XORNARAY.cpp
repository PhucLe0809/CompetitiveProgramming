#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string a, b; cin >> a >> b;
    string c = a;
    for (int i = 0; i < c.size(); i++){
        if (a[i] == b[i]) c[i] = '0'; else c[i] = '1';
    }
    while(!c.empty() && c[0] == '0') c.erase(c.begin());
    cout << c;
    return 0;
}