#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m, d; cin >> n >> m >> d;
    int32_t a, b;
    a = b = -1;
    int32_t exac = d;
    while (a==-1 || b==-1){
        if (a==-1 && d%n==0) a = d/n;
        if (b==-1 && d%m==0) b = d/m; 
        d += exac; 
    }
    if (a==b) cout << 0;
    else if (a<b) cout << 1; else cout << -1;
    return 0;
}