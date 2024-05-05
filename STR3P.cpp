#include <bits/stdc++.h>

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    long long a, b, c, d; a = b = c = d = 1;
    for (int i = 1; i < n; i++){
        c = a + b + a;
        d = a + a;
        c %= 1000000007; d %= 1000000007;
        a = c; b = d;
    }
    cout << (long long)(2LL*c + d) % 1000000007;
}

int main(){
    GOTOHANOI();
}