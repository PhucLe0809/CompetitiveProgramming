#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int r, g, b, w;
    bool x, y, z, t;
    while (test--){
        cin >> r >> g >> b >> w;
        x = (r%2); y = (g%2);
        z = (b%2); t = (w%2);
        if ((x+y+z+t==0) || (x+y+z+t==4) || (x+y+z+t==1) || 
        (((x==0 && r!=0)||(y==0 && g!=0)||(z==0 && b!=0)||(t==0)) && x+y+z+t==3)){
            cout << "Yes\n";
        }else cout << "No\n";
    }
    return 0;
}