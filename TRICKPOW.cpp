#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b, c; cin >> a >> b >> c;
    if (c == 0){
        cout << "="; return 0;
    }
    if (c > 0){
        if (c % 2 == 0) a = abs(a), b = abs(b);
        if (a > b) cout << ">";
        else if (a < b) cout << "<"; else cout << "=";
        return 0;
    }    
    if (c < 0){
        if (c % 2 == 0) a = abs(a), b = abs(b);
        if (a > b) cout << "<";
        else if (a < b) cout << ">"; else cout << "=";
        return 0;
    }
    return 0;
}