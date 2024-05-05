#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t a, b, n, cnt;
    int tmp;
    while (test--){
        cin >> a >> b;
        if (a<b) swap(a, b);
        if (a%b!=0) cout << -1 << '\n';
        else{
            n = 0;
            while (a>b && a%2==0){
                n++; a /= 2;
            }
            if (a!=b) cout << -1 << '\n';
            else{
                cnt = n/3; n -= (n/3)*3;
                cnt += n/2; n -= (n/2)*2;
                cnt += n;
                cout << cnt << '\n';
            }
        }
    }
    return 0;
}