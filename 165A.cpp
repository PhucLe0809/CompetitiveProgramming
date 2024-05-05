#include <bits/stdc++.h>
#define dis 1000

using namespace std;
vector <pair<int, int>> inp;
vector <vector<int>> row(2*dis+5), col(2*dis+5);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x, y;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        inp.push_back({x+dis, y+dis});
        row[x+dis].push_back(y+dis);
        col[y+dis].push_back(x+dis);
    }
    int cnt = 0;
    for (int i = 0; i <= 2*dis; i++){
        sort(row[i].begin(), row[i].end());
        sort(col[i].begin(), col[i].end());
    }
    for (int i = 0; i < n; i++){
        x = inp[i].first; y = inp[i].second;
        auto it1 = upper_bound(row[x].begin(), row[x].end(), y);
        auto it2 = upper_bound(col[y].begin(), col[y].end(), x);
        if (row[x][0]<y && it1!=row[x].end() && col[y][0]<x && it2!=col[y].end()){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}