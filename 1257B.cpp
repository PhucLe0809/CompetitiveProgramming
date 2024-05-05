#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int x, y;
    while (test--){
        cin >> x >> y;
        if (x>=y) cout << "YES\n";
        else if (x==1) cout << "NO\n";
            else{
                if (x==2){
                    if (y==3) cout << "YES\n";
                    else cout << "NO\n";
                }else{
                    if (x%2==0) cout << "YES\n";
                    else if (((x-1)/2)*3==x) cout << "NO\n";
                        else cout << "YES\n";
                }
            }
    }
    return 0;
}