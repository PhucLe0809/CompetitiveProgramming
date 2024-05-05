#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_good(int num, int k){
    int sum = 0;
    while (num){
        sum += num % 10; num /= 10;
    }
    return (sum % k == 0);
}
void GOTOHANOI(){
    int x, k; cin >> x >> k;
    for (int y = x; y <= x + 18; y++){
        if (is_good(y, k)){
            cout << y << endl; return;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}