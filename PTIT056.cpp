#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_prime(int &num){
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0) return false;
    }
    return true;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n; 
    string str = to_string(n);
    int sdigit = 0;
    for (auto &it:str) sdigit += it - '0';
    if (is_prime(n) && is_prime(sdigit)) cout << "YES"; else cout << "NO";
    return 0;
}