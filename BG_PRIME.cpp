#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_prime(int num){
    for (int i = 2; i*i <= num; i++){
        if (num % i == 0) return false;
    }
    return true;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n; 
    int cnt = 0;
    for (int i = 2; i <= (int)sqrt(n); i++) cnt += (int)(is_prime(i));
    cout << cnt;
    return 0;
}