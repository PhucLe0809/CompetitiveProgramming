#include <bits/stdc++.h>

using namespace std; 
bool tick[105];
vector <int32_t> one, two;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, a, b, cnt;
    while (test--){
        cin >> n >> a >> b;
        one.clear(); two.clear();
        fill(tick, tick+n+1, false); cnt = 1;
        one.push_back(a); tick[a] = true;
        for (int i = b+1; i<=n && cnt!=n/2; i++){
            if (i!=a){
                one.push_back(i); cnt++;
                tick[i] = true;
            }
        }
        for (int i = a+1; i<=n && cnt!=n/2; i++){
            if (i!=b && !tick[i]){
                one.push_back(i); cnt++;
                tick[i] = true;
            }
        }
        for (int i = 1; i <= n; i++){
            if (!tick[i]) two.push_back(i);
        }
        if (*min_element(one.begin(), one.end())!=a || *max_element(two.begin(), two.end())!=b
        || one.size()!=n/2 || two.size()!=n/2) 
            cout << "-1\n";
        else{
            for (auto x:one) cout << x << " ";
            for (auto x:two) cout << x << " ";
            cout << '\n';
        }
    }
    return 0;
}