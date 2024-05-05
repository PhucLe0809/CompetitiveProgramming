#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k; cin >> n >> k;
    int32_t pos, nev, x;
    pos = nev = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x>0) pos += x;
        if (x<0) nev += abs(x);
    }
    cout << abs(pos-nev)/k + (abs(pos-nev)%k!=0);
    return 0;
}