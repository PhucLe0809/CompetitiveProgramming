#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, zero, one, other, x;
    while (test--){
        cin >> n;
        zero = one = other = 0;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x==0) zero++;
            else if (x==1) one++; else other++;
        }
        if (zero <= (n+1)/2) cout << "0\n";
        else if (other>0 || one==0) cout << "1\n";
            else cout << "2\n";
    }
    return 0;
}   