#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
int dig[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};
 
int lastNon0Digit(int n){
    if (n < 10) return dig[n];
    // Check whether tens (or second last) digit
    // is odd or even
    // If n = 375, So n/10 = 37 and (n/10)%10 = 7
    // Applying formula for even and odd cases.
    if (((n/10) % 10) % 2 == 0) return (6*lastNon0Digit(n/5)*dig[n%10]) % 10;
    else return (4*lastNon0Digit(n/5)*dig[n%10]) % 10;
}

void GOTOHANOI(){
    int n; cin >> n;
    cout << lastNon0Digit(n) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}