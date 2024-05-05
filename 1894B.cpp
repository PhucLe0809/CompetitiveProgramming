#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <vector<int>> scan(105);
    for (int i = 0; i < n; i++){
        int x; cin >> x; scan[x].push_back(i);
    }
    bool check = true; int cnt = 0;
    vector <int> out(n, 1);
    for (int i = 0; i < 105 && check; i++){
        cnt += (scan[i].size() > 1);
        if (scan[i].empty()) continue;
        if (cnt & 1){
            for (int j = 1; j < (int)scan[i].size(); j++) out[scan[i][j]] = 2;
        }else{
            for (int j = 1; j < (int)scan[i].size(); j++) out[scan[i][j]] = 3;
        }
    }
    if (cnt < 2) cout << -1 << endl;
    else{
        for (auto &it:out) cout << it << " "; cout << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}