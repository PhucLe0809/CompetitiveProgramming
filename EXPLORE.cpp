#include <bits/stdc++.h>

using namespace std; 
vector <pair<int32_t, int32_t>> inp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, t; cin >> t >> n;
    int32_t x;
    inp.push_back({0, 0});
    for (int i = 0; i < n; i++){
        cin >> x;
        inp.push_back({abs(x), x});
    }
    sort(inp.begin(), inp.end());
    int32_t cnt = 0;
    int32_t res = 0;
    for (int i = 1; i<=n; i++){
        res += abs((inp[i].second-inp[i-1].second));
        if (res<=t) cnt++;
        else break;
    }
    cout << cnt;
    return 0;
}