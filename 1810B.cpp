#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--){
        cin >> n;
        if (n%2==0) cout << -1 << '\n';
        else{
            stack <int32_t> sta;
            while (n!=1){
                if (((n+1)/2)%2!=0){
                    sta.push(1);
                    n = (n+1)/2;
                }else{
                    sta.push(2);
                    n = (n-1)/2;
                }
            }
            cout << sta.size() << '\n';
            while (sta.size()){
                cout << sta.top() << " "; 
                sta.pop();
            }
            cout << '\n';
        }
    }
    return 0;
}