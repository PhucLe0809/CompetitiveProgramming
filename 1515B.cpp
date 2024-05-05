#include <bits/stdc++.h>

using namespace std;

bool is_sqr(int n) {
    return (sqrt(n)==floor(sqrt(n)));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n;
    double tmp;
    while (test--){
        cin >> n;
        if ((n%4==0 && is_sqr(n/4)) || (n%2==0 && is_sqr(n/2))) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}