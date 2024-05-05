#include <bits/stdc++.h>
#define inf 1000000000000007

using namespace std;

int64_t calc(vector <pair<int64_t, int64_t>> &cor, int &s, int &t, int &n, int &k){
    int64_t one = inf, two = inf;
    s--; t--; k--;
    for (int i = 0; i <= k; i++){
        if (s <= k && i <= k) one = 0; 
        else one = min(one, abs(cor[s].first - cor[i].first) + abs(cor[s].second - cor[i].second));
        if (t <= k && i <= k) two = 0; 
        else two = min(two, abs(cor[t].first - cor[i].first) + abs(cor[t].second - cor[i].second));
    }
    return min(one+two, abs(cor[s].first - cor[t].first) + abs(cor[s].second - cor[t].second));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n, k, a, b; cin >> n >> k >> a >> b;
        vector <pair<int64_t, int64_t>> cor(n);
        for (int i = 0; i < n; i++){
            cin >> cor[i].first >> cor[i].second;
        }
        if (a <= k && b <= k){
            cout << 0 << '\n'; 
        } else cout << calc(cor, a, b, n, k) << '\n';
    }
    return 0;
}