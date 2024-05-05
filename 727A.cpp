#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b; cin >> a >> b;
    stack <int> sta;
    while (b!=0 && b!=a){
        sta.push(b);
        if (b&1){ 
            b--; 
            if (b%10!=0) break;
            else b /= 10; 
        }else b /= 2;
    }
    if (b!=a) cout << "NO\n";
    else{
        cout << "YES\n"; sta.push(a);
        cout << sta.size() << '\n';
        while (!sta.empty()){
            cout << sta.top() << " "; sta.pop();
        }
    }
    return 0;
}