#include <bits/stdc++.h>

using namespace std; 
vector <pair<int32_t, int32_t>> scan;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x;
    for (int i = 1; i <= n; i++){
        cin >> x;
        scan.push_back({x, i});
    }
    sort(scan.begin(), scan.end());
    for (int i = 0; i < n/2; i++){
        cout << scan[i].second << " " << scan[n-i-1].second << '\n';
    }
    return 0;
}