#include <bits/stdc++.h>

using namespace std; 
pair <int32_t, int32_t> inp[5];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    while (test--){
        for (int i = 0; i < 3; i++)
            cin >> inp[i].second >> inp[i].first;
        sort(inp, inp+3);
        if ((inp[0].first!=inp[1].first && inp[1].first!=inp[2].first)
        || (inp[0].first==inp[1].first))
            cout << 0 << '\n';
        else{
            if (inp[0].first==inp[1].first)
                cout << abs(inp[0].second-inp[1].second) << '\n';
            else cout << abs(inp[1].second-inp[2].second) << '\n';
        }
    }
    return 0;
}