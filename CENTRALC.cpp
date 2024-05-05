#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector <int> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        map <int64_t, int64_t> mp;
        mp[inp[0]] = 1;
        int64_t answer  = inp[0];
        for (int i = 1; i < n; i++){
            map <int64_t, int64_t> temp;
            answer += inp[i];
            temp[inp[i]]++;
            for (auto &it:mp){
                int64_t gcd = __gcd(int64_t(inp[i]), it.first);
                (answer += (gcd * it.second) % mod) %= mod;
                // if (it.second != 0) answer += (gcd * it.second) % mod;
                // else (answer += gcd) %= mod;
                (temp[gcd] += it.second) %= mod;
            }
            for (auto &it:temp){
                (mp[it.first] += it.second) %= mod;
            }
        }
        answer %= mod;
        cout << answer << '\n';
    }
    return 0;
}