#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t a, b; cin >> a >> b;
    if (abs(a-b)==0) cout << a << 1 << " " << b << 2;
    else{
        if (a<b){
            if (b-a>1) cout << -1;
            else cout << a << 9 << " " << b << 0;
        }
        if (a>b){
            if (a==9 && b==1) cout << a << " " << b << 0;
            else cout << -1;
        }
    }
    return 0;
}