#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, b, p; cin >> n >> b >> p;
    int tow = n*p;
    int bot = 0, k = n, r, s;
    while(k>1)
    {
        s = log2(k);
        r = pow(2, s);
        bot += ((r/2)*(2*b+1));
        k -= (r/2);
    }
    cout << bot << " " << tow;
    return 0;
}