#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n;
    while (test--){
        cin >> n;
        vector <pair<int, int>> inp(n);
        for (int i = 0; i < n; i++){
            cin >> inp[i].first; inp[i].second = i+1;
        }
        sort(inp.begin(), inp.end());
        if (inp[0].first!=inp[1].first) cout << inp[0].second << '\n';
        else cout << inp[n-1].second << '\n'; 
    }
    return 0;
}