#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_prime(int &num){
    if (num < 2) return false;
    for (int i = 2; i*i <= num; i++){
        if (num % i == 0) return false;
    }
    return true;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b; cin >> a >> b;
    for (int i = a; i <= b; i++){
        if (is_prime(i)) cout << i << endl;
    }
    return 0;
}