#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t a, b, c, r;
    int32_t d, e, erea;
    while (test--){
        cin >> a >> b >> c >> r;
        if (a>b) swap(a, b);
        d = c-r; e = c+r;
        erea = 0;
        if (a<=d && e<=b) erea = (d-a)+(b-e);
        if (d<=a && e>=a && e<=b) erea = b-e;
        if (e>=b && d>=a && d<=b) erea = d-a;
        if (e<=a || b<=d) erea = b-a;
        cout << erea << '\n';
    }
    return 0;
}