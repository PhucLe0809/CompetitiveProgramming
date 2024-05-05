#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x, pos, neg;
    pos = neg = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x>0) pos++;
        if (x<0) neg++;
    }
    if (ceil(n*1.0/2)>pos && ceil(n*1.0/2)>neg) cout << 0;
    else{
        if (ceil(n*1.0/2)<=pos) cout << 1;
        else cout << -1;
    }
    return 0;
}