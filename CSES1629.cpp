#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <pair<int, int>> inp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i].second >> inp[i].first;
    }
    sort(inp.begin(), inp.end());
    int thend = 0, cnt = 0;
    for (auto &it:inp){
        if (it.second >= thend){
            thend = it.first;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}