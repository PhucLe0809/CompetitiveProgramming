#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    string a, b, tmp;
    int n, m, t; bool check;
    while (test--){
        cin >> a >> b;
        if (a.size()<b.size()) swap(a, b);
        n = a.size(); m = b.size();
        t = n*m/__gcd(n, m); tmp = a;
        while (a.size()<t) a += tmp;
        check = true;
        for (int i = 0; i<=t-m && check; i+=m){
            tmp = a.substr(i, m);
            if (tmp!=b) check = false;
        }
        if (check) cout << a << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}