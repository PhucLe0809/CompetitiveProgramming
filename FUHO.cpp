#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        long long n, k; cin >> n >> k;
        cout << (n/k) * (n/k) << '\n';
    }
}