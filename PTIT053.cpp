#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_prime(int num){
    if (num < 2) return false;
    for (int i = 2; i*i <= num; i++){
        if (num % i == 0) return false;
    }
    return true;
}
int calc_sdigit(int num){
    int sdigit = 0;
    while (num > 0){
        sdigit += num % 10;
        num /= 10;
    }
    return sdigit;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int l, r; cin >> l >> r;
    int cnt = 0;
    for (int i = l+1; i <= r; i++) cnt += (int)(is_prime(calc_sdigit(i)));
    cout << cnt;
    return 0;
}