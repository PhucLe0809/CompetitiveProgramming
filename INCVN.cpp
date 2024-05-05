#include <bits/stdc++.h>
#define maxarray 100005
#define mod 5000000

using namespace std;
vector <int64_t> bit(maxarray);

void update(int n, int pos, int val){
    while (pos <= n){
        bit[pos] = (bit[pos] + val)%mod;
        pos += (pos&(-pos));
    }
}
int64_t query(int pos){
    int64_t out = 0;
    while (pos > 0){
        out += bit[pos];
        pos -= (pos&(-pos));
    }
    return out%mod;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <int> inp(n), cnt(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i]; 
        inp[i]++; cnt[i] = 1;
    }
    for (int l = 2; l <= k; l++){
        fill(bit.begin(), bit.end(), 0);
        for (int i = 0; i < n; i++){
            update(maxarray, inp[i], cnt[i]);
            cnt[i] = query(inp[i]-1);
        }
    }
    int64_t answer = 0;
    for (auto &it:cnt) answer += it;
    cout << answer % mod;
    return 0;
}