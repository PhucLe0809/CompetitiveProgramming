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
    if (n < 2){
        cout << -1; return 0;
    }
    vector <int> sprime = {0, 2};
    vector <int> out;
    while (!sprime.empty() && sprime.back() < n){
        int num = sprime[0]; sprime.erase(sprime.begin());
        out.push_back(num);
        for (int i = 1; i <= 5; i++){
            int x = num * 10 + (2*i - 1);
            if (x <= n && is_prime(x)) sprime.push_back(x);
        }
    }
    for (auto &it:sprime) out.push_back(it);
    sort(out.begin(), out.end()); out.erase(out.begin());
    if (out.empty()) cout << -1;
    else for (auto &it:out) cout << it << " ";
    return 0;
}
