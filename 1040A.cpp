#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, a, b; cin >> n >> a >> b;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    int cost = 0; bool check = true;
    for (int i = 0; i < n/2 && check; i++){
        if ((inp[i]==0 && inp[n-i-1]==1)||(inp[i]==1 && inp[n-i-1]==0)){
            check = false;
        }else{
            if (inp[i]==inp[n-i-1] && inp[i]==2){
                cost += min(a, b)*2;
            }else{
                if (inp[i]!=inp[n-i-1]){
                    if (inp[i]==2){
                        cost += (inp[n-i-1]==0)?(a):(b);
                    }else cost += (inp[i]==0)?(a):(b);
                }
            }
        }
    }
    if (n&1 && inp[n/2]==2) cost += min(a, b);
    if (check) cout << cost;
    else cout << -1;
    return 0;
}