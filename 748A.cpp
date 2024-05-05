#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m, k; cin >> n >> m >> k;
    int32_t col = k/(2*m)+(k%(2*m)!=0);
    if (k%(2*m)!=0){
        cout << col << " " << (k%(2*m))/2+((k%(2*m))%2!=0) << " ";
        if ((k%(2*m))%2!=0) cout << "L"; else cout << "R";
    }else{
        cout << col << " " << m << " " << "R";
    }
    return 0;
}