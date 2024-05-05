#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1000005

using namespace std;
bool eratos[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    fill(eratos, eratos + maxarray, true);
    eratos[0] = eratos[1] = false;
    for (int i = 2; i*i < maxarray; i++){
        for (int j = i*i; j < maxarray; j += i){
            eratos[j] = false;
        }
    }
    vector <int> prime;
    for (int i = 2; i <= n; i++){
        if (eratos[i]) prime.push_back(i);
    }
    vector <int> scan;
    for (int i = 1; i < prime.size(); i++){
        scan.push_back(prime[i] - prime[i-1]);
    }
    map <int, int> mp; mp[0] = 1;
    int cnt = 0, sum = 0;
    for (auto &it:scan){
        sum += it;
        cnt += mp[sum - k];
        mp[sum]++;
    }
    cout << cnt;
    return 0;
}