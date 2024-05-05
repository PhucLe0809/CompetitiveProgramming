#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    int infront = -1;
    for (int i = 0; i < n; i++){
        cin >> inp[i];
        if (inp[i] && infront==-1) infront = i;
    }
    if (infront==-1) cout << 0;
    else{
        int cnt = 1;
        for (int i = infront+1; i < n; i++){
            if (inp[i]){
                cnt += min(i-infront, 2);
                infront = i;
            }
        }
        cout << cnt;
    }
    return 0;
}