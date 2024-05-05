#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, k; cin >> n >> k;
    vector <pair<int64_t, int64_t>> inp(k);
    vector <int64_t> scan(k);
    for (int i = 0; i < k; i++){
        cin >> scan[i];
        inp[i].first = n%scan[i]; inp[i].second = i+1;
    }
    sort(inp.begin(), inp.end());
    cout << inp[0].second << " " << n/scan[inp[0].second-1];
    return 0;
}