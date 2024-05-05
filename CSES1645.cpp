#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    stack <pair<int, int>> sta;
    sta.push({0, 0});
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        while (sta.size() && sta.top().first >= x) sta.pop();
        cout << sta.top().second << " ";
        sta.push({x, i});
    }
    return 0;
}