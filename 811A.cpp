#include <bits/stdc++.h>
#define limit 1000005

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t a, b; cin >> a >> b;
    for (int i = 1; i<=limit && a>=0 && b>=0; i++){
        if (i%2!=0) a -= i;
        else b -= i;
    }
    if (a < 0) cout << "Vladik\n";
    else cout << "Valera\n";
    return 0;
}