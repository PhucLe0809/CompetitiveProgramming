#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> d;
vector <pair<int32_t, int32_t>> scan;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, x, answer;
    while (test--){
        cin >> n;
        scan.clear(); d.clear();
        for (int i = 0; i < n; i++){
            cin >> x;
            scan.push_back({x, i});
        }
        sort(scan.begin(), scan.end());
        for (int i = 0; i < n; i++){
            if (scan[i].second!=i) d.push_back(abs(scan[i].second-i));
        }
        if (d.size()==1) cout << *d.begin() << '\n';
        else{
            k = __gcd(d[0], d[1]);
            for (int i = 2; i < d.size(); i++){
                k = __gcd(k, d[i]);
            }
            cout << k << '\n';
        }
    }
    return 0;
}