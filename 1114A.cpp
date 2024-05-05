#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t x, y, z, a, b, c;
    cin >> x >> y >> z;
    cin >> a >> b >> c;
    bool check;
    if ((a>=x) && (max(a-x,0)+b>=y)){
        if (b>=y){
            if (max(a-x, 0)+max(b-y,0)+c>=z) check = true;
            else check = false;
        } else {
            if (max(a-x, 0)>=y){
                if (max(a-x-y, 0)+b+c>=z) check = true;
                else check = false;
            } else {
                if (max(a-x+b-y, 0)+c>=z) check = true;
                else check = false;
            }
        }
    }
    else check = false;
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}