#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <pair<int, int>> inp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i].first >> inp[i].second;
    }
    bool check = true;
    int height = max(inp[0].first, inp[0].second);
    for (int i = 1; i<n && check; i++){
        if (height >= max(inp[i].first, inp[i].second)){
            height = max(inp[i].first, inp[i].second);
        }else{
            if (height < min(inp[i].first, inp[i].second)) check = false;
            else{
                height = min(inp[i].first, inp[i].second);
            }
        }
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}