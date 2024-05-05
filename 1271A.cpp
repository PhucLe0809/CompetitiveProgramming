#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int64_t result = 0;
    if (e > f){
        result += min(a, d)*e;
        d -= min(a, d);
        result += min({b, c, d})*f;
    }else{
        result += min({b, c, d})*f;
        d -= min({b, c, d});
        result += min(a, d)*e;
    }
    cout << result << '\n';
    return 0;
}