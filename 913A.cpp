#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> scan;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    int32_t multi = 1;
    scan.push_back(multi);
    for (int i = 1; i < 32; i++){
        multi *= 2; scan.push_back(multi);
    }
    int32_t pos = upper_bound(scan.begin(), scan.end(), m)-scan.begin();
    if (pos >= n) cout << m%int32_t(pow(2, n));
    else cout << m;
    return 0;
}