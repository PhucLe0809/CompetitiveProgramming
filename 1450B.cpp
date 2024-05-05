#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, k, cnt; bool check;
    while (test--){
        cin >> n >> k;
        vector <pair<int, int>> inp(n);
        for (int i = 0; i < n; i++){
            cin >> inp[i].first >> inp[i].second;
        }
        int a, b; check = false;
        for (int i = 0; i < n && !check; i++){
            cnt = 0;
            for (int j = 0; j < n; j++){
                a = abs(inp[i].first-inp[j].first);
                b = abs(inp[i].second-inp[j].second);
                if (a+b<=k) cnt++;
            }
            if (cnt==n) check = true;
        }
        if (check) cout << 1; else cout << -1;
        cout << '\n';
    }
    return 0;
}