#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    if ((n/7) % 2 == 0) cout << 7 - (n % 7) << " " << n % 7;
    else cout << n % 7 << " " << 7 - (n % 7);
}