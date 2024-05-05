#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int five, zero;
    five = zero = 0;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x==0) zero++;
        else five++;
    }
    if (zero==0) cout << -1;
    else{
        while ((five*5)%9!=0) five--;
        if (five==0) cout << 0;
        else{
            for (int i = 0; i < five; i++) cout << 5;
            for (int i = 0; i < zero; i++) cout << 0;
        }
    }
    return 0;
}