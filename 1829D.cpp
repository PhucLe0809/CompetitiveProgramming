#include <bits/stdc++.h>

using namespace std;

bool divide(int n, int m){
    if (n==m) return true;
    if (n%3!=0 || m>n) return false;
    if (n/3==m || (n/3)*2==m) return true;
    return (divide(n/3, m) || divide((n/3)*2, m));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, m;
    while (test--){
        cin >> n >> m;
        if (divide(n, m)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}