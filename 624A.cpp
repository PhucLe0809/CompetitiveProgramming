#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    double d, l, v1, v2; cin >> d >> l >> v1 >> v2;
    //s1 + s2 = l-d;
    //v2.s1 - v1.s2 = 0
    //(v1+v2).s1 = v1.(l-d)
    //t = (l-d)/(v1+v2);
    cout << fixed << setprecision(9) << ((l-d)/(v1+v2));
    return 0;
}