#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int d, m, y; cin >> d >> m >> y;
    string str = "users setClock ";
    str += (char)(92); str += to_string(m);
    str += (char)(92); str += to_string(d);
    str += (char)(92); str += to_string(y);
    cout << str;
    return 0;
}