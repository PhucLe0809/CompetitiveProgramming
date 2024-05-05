#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, m; cin >> n >> m;
    long long res = (n/2) * (m/2);
    if (n % 2 == 0 && m % 2 == 0){
        cout << res;
    }   
    if (n % 2 == 0 && m % 2 != 0){
        cout << res + n/2;
    }
    if (n % 2 != 0 && m % 2 == 0){
        cout << res + m/2;
    }
    if (n % 2 != 0 && m % 2 != 0){
        cout << res + n/2 + m/2 + 1;
    }
}