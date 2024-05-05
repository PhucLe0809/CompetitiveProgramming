#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
vector <int32_t> eratos(maxarray);
vector <int32_t> cnt(maxarray, 0);
vector <int32_t> dif, inp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    iota(eratos.begin(), eratos.end(), 0);
    for (int i = 2; i*i < maxarray; i++){
        if (eratos[i]==i){
            for (int j = i*i; j < maxarray; j += i){
                if (eratos[j]==j) eratos[j] = i;
            }
        }
    }
    // for (int i = 0; i < 20; i++) cout << eratos[i] << " "; cout << '\n';
    int32_t n; cin >> n;
    int32_t x; inp.push_back(0);
    for (int i = 0; i < n; i++){
        cin >> x;
        inp.push_back(x);
        cnt[x]++;
    }
    sort(inp.begin(), inp.end());
    inp.erase(unique(inp.begin(), inp.end()), inp.end());
    for (auto x:inp) cout << x << " "; cout << '\n';
    n = inp.size()-1;
    int32_t dis;
    for (int i = 1; i <= n; i++){
        for (int j = i+1; j <= n; j++){
            dis = inp[j]-inp[i];
            if (dis==1) continue;
            dif.push_back(eratos[dis]);
        }
    }
    for (auto x:dif) cout << x << " "; cout << '\n';
    sort(dif.begin(), dif.end());
    dif.erase(unique(dif.begin(), dif.end()), dif.end());
    for (auto x:dif) cout << x << " "; cout << '\n';
    int32_t answer = 0;
    int32_t mxe = *max_element(inp.begin(), inp.end());
    for (auto d : dif){
        vector <int32_t> dp(mxe+5, 0);
        for (int i = 1; i <= n; i++){
            dp[inp[i]] = cnt[inp[i]];
        }
        for (int i = 1; i <= n; i++){
            for (int j = inp[i]-d; j > 0; j -= d){
                if (cnt[j]==0) continue;
                dp[inp[i]] = max(dp[inp[i]], dp[j]+cnt[inp[i]]);
            }
            answer = max(answer, dp[inp[i]]);
        }
        for (auto x:dp) cout << x << " "; cout << '\n';
    }
    cout << answer << '\n';
    return 0;
}