#include <bits/stdc++.h>

using namespace std;

int cnt_gcd(int a, int b){
    int res, cnt = 0;
    while (b!=0){
        res = a%b;
        cnt += a/b;
        a = b; b = res;
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int a, b;
    while (test--){
        cin >> a >> b;
        cout << cnt_gcd(a, b) << '\n'; 
    }
    return 0;
}