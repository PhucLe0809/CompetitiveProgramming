#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007
#define maxarray 1000005

using namespace std;
int minprime[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, q; cin >> n >> q;
    fill(minprime, minprime + maxarray, 0);
    minprime[0] = minprime[1] = 1;
    for (int i = 2; i*i < maxarray; i++){
        for (int j = i*i; j < maxarray; j += i){
            if (minprime[j] == 0) minprime[j] = i;
        }
    }
    for (int i = 2; i < maxarray; i++){
        if (minprime[i] == 0) minprime[i] = i;
    }
    map <int, int> mp;
    vector <map<int, int>> fact;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        map <int, int> temp;
        while (x != 1){
            temp[minprime[x]]++; x /= minprime[x];
        }
        for (auto &it:temp) mp[it.first] = max(mp[it.first], it.second);
        fact.push_back(temp);
    }
    int lcm = 1;
    for (auto &it:mp){
        for (int i = 0; i < it.second; i++){
            lcm = ((lcm % mod) * (it.first % mod)) % mod;
        }
    }
    while (q--){
        int ind, x; cin >> ind >> x;
        ind--;
        map <int, int> temp;
        while (x != 1){
            temp[minprime[x]]++; x /= minprime[x];
        }
        for (auto &it:temp) fact[ind][it.first] += it.second;
        for (auto &it:fact[ind]){
            int upto = max(it.second - mp[it.first], 0LL);
            for (int i = 0; i < upto; i++){
                lcm = ((lcm % mod) * (it.first % mod)) % mod;
            }
            mp[it.first] += upto;
        }
        cout << lcm << endl;
    }
    return 0;
}