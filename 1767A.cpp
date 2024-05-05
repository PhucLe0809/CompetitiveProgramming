#include <bits/stdc++.h>

using namespace std; 
pair <int32_t, int32_t> d[5];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t x, y, z;
    while (test--){
        for (int i = 0; i < 3; i++){
            cin >> d[i].first >> d[i].second;
        }
        sort(d, d+3);
        if (d[0].first!=d[1].first && d[1].first!=d[2].first)
            cout << "YES\n";
        else{
            if (d[0].first==d[1].first){
                x = d[0].second; y = d[1].second;
                z = d[2].second;
            }
            if (d[1].first==d[2].first){
                x = d[1].second; y = d[2].second;
                z = d[0].second;
            }
            if (d[0].first==d[2].first){
                x = d[0].second; y = d[2].second;
                z = d[1].second;
            }
            if (z!=x && z!=y) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}