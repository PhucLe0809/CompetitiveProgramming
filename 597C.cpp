#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <uint64_t> bit(maxarray);

void update(int n, int pos, uint64_t val){
    while (pos <= n){
        bit[pos] = (bit[pos] + val);
        pos += (pos&(-pos));
    }
}
uint64_t query(int pos){
    uint64_t out = 0;
    while (pos > 0){
        out += bit[pos];
        pos -= (pos&(-pos));
    }
    return out;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <uint64_t> inp(n), dp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i]; 
        inp[i]++; dp[i] = 1;
    }
    for (int l = 2; l <= k+1; l++){
        fill(bit.begin(), bit.end(), 0);
        for (int i = 0; i < n; i++){
            update(maxarray, inp[i], dp[i]);
            dp[i] = query(inp[i]-1);
        }
    }
    uint64_t answer = 0;
    for (auto &it:dp) answer += it;
    cout << answer;
    return 0;
}