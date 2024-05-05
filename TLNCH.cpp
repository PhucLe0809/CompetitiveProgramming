#include <bits/stdc++.h>
#define maxarray 30

using namespace std; 
int64_t a[maxarray], b[maxarray];
vector <pair<bool, int64_t>> tick;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k; cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n, greater<>());
    int32_t sumlimit = 0;
    int64_t init = 0;
    for (int i = 0; i < n; i++){
        b[i] = a[i]%k; sumlimit += b[i];
        if (b[i]==0) init += a[i];
    }
    for (int i = 0; i <= sumlimit; i++){
        tick.push_back({false, init});
    }
    tick[0].first = true;
    for (int i = 0; i < n; i++){
        if (b[i]==0) continue;
        for (int t = sumlimit; t >= b[i]; t--){
            if (tick[t-b[i]].first){
                tick[t].first = true;
                tick[t].second = tick[t-b[i]].second
                 + max(max(tick[t].second-tick[t-b[i]].second, int64_t(0)), a[i]);
            }
        }
    }
    int64_t answer = 0; 
    for (int i = 0; i <= sumlimit; i++){
        if (i%k==0 && tick[i].first) answer = max(answer, tick[i].second);
    }
    cout << answer;
    return 0;
}