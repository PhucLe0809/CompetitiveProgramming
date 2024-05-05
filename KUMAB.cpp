#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int res = (n / 10) * 10;
    n = (n/10) * 3 + n%10;
    while (n >= 10){
        res += (n / 10) * 10;
        n = (n/10) * 3 + n%10;
    }
    res += n;
    cout << res;
}
