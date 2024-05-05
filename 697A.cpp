#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    double t, s, x; cin >> t >> s >> x;
    if (t==x){
        cout << "YES\n"; return 0;
    }
    if (t>x){
        cout << "NO\n"; return 0;
    }
    double a = (x-t)/s;
    double b = (x-t-1)/s;
    if ((floor(a)==a && a!=0) || (floor(b)==b && b!=0.0)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}