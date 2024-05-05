#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, res;
    while (test--){
        cin >> n;
        res = ceil(n*1.0/4);
        for (int i = 0; i < n-res; i++) cout << "9";
        for (int i = 0; i < res; i++) cout << "8";
        cout << '\n';
    }
    return 0;
}