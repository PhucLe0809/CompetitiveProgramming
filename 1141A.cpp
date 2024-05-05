#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, m; cin >> n >> m;
    if (m%n!=0){
        cout << -1; return 0;
    }
    m /= n;
    int cnt = 0;
    if (m%2==0){
        while (m%2==0 && m!=1){
            cnt++; m /= 2;
        }
        while (m%3==0 && m!=1){
            cnt++; m /= 3;
        }
        if (m==1) cout << cnt;
        else cout << -1;
    }else{
        while (m%3==0 && m!=1){
            cnt++; m /= 3;
        }
        while (m%2==0 && m!=1){
            cnt++; m /= 2;
        }
        if (m==1) cout << cnt;
        else cout << -1;
    }
    return 0;
}