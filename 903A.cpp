#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int x; bool check;
    while (test--){
        cin >> x;
        check = false;
        for (int i = 0; i <= x/3; i++){
            if ((x-3*i)%7==0){
                check = true; break;
            }
        }
        if (check) cout << "YES\n"; else cout << "NO\n";
    }
    return 0;
}