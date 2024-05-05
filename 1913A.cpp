#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    string b; cin >> b;
    string a; a += b[0]; b.erase(b.begin());
    while (b[0] == '0') a += b[0], b.erase(b.begin());
    if (a.size() < b.size() || (a.size() == b.size() && a < b)){
        cout << a << " " << b;
    }else cout << -1;
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}