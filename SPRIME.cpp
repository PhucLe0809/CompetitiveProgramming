#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_prime(int num){
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
    vector <int> sprime = {2, 3, 5, 7};
    if (n > 8) sprime.clear(), sprime = {23399339, 29399999, 37337999, 59393339, 73939133};
    while (!sprime.empty() && to_string(sprime[0]).size() < n){
        int num = sprime[0]; sprime.erase(sprime.begin());
        for (int i = 1; i <= 5; i++){
            int x = num * 10 + (2*i - 1);
            if (is_prime(x)) sprime.push_back(x);
        }
    }
    for (auto &it:sprime) cout << it << " ";
    return 0;
}