#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(0); cout.tie(0);
    int n, m, k; cin >> n >> m >> k;
    vector <vector<char>> inp(n+2, vector<char>(m+3));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> inp[i][j];
        }
        inp[i][m+1] = '#';
    }
    vector <vector<int>> scan;
    for (int i = 1; i <= n; i++){
        int t = 1;
        while (t <= m+1){
            int j = t;
            while (j <= m+1 && inp[i][j] == '#') j++;
            vector <int> temp;
            while (j <= m+1 && inp[i][j] != '#'){
                if (inp[i][j] == 'x') temp.push_back(j);
                j++;
            }
            if (!temp.empty()) scan.push_back(temp);
            t = j+1;
        }
    }
    // for (int i = 0; i < scan.size(); i++){
    //     for (auto &it:scan[i]) cout << it << " ";
    //     cout << endl;
    // }
    int l = 0; 
    int r = m;
    int total = scan.size();
    int cnt;
    while (l <= r){
        int mid = (l + r)/2;
        int v = 2*mid + 1;
        cnt = 0;
        for (int i = 0; i < total; i++){
            if (scan[i].size() == 1){
                cnt++; continue;
            }
            int a = scan[i].size();
            int run = scan[i][0] + v-1;
            int b = 1;
            for (int j = 0; j < scan[i].size(); j++){
                if (scan[i][j] <= run) continue;
                run = scan[i][j] + v-1;
                b++;
            }
            int c = ceil((scan[i].back() - scan[i][0] + 1)*1.0/v);
            cnt += min({a, b, c});
        }
        if (cnt <= k){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    if (r+1 > m) cout << -1;
    else cout << r+1;
    return 0;
}