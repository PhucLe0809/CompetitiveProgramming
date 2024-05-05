#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int scan[8]; int s = 0;
    for (int i = 0; i < 7; i++){
        cin >> scan[i];
        s += scan[i];
    }
    n = n - (n/s)*s;
    if (n==0){
        for (int i = 6; i >= 0; i--){
            if (scan[i]!=0){
                cout << i+1; return 0;
            }
        }
    }
    for (int i = 0; i < 7; i++){
        n -= scan[i];
        if (n<=0){
            cout << i+1; return 0;
        }
    }
    return 0;
}