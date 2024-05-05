#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n; cin >> n;
    if (n==1) cout << 1;
    else{
        int64_t cnt = (n-1)+n;
        for (int i = 2; i <= n-1; i++){
            cnt += i*(n-i);
        }
        cout << cnt;
    }
    return 0;
}