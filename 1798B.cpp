#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int m, n, x, tmp; bool check;
    while (test--){
        cin >> m;
        vector <vector<int>> inp(m);
        for (int i = 0; i < m; i++){
            cin >> n;
            for (int j = 0; j < n; j++){
                cin >> x; inp[i].push_back(x);
            }
            sort(inp[i].begin(), inp[i].end());
        }
        map <int, int> mp;
        for (int i = 1; i < m; i++){
            set <int> st;
            for (int j = 0; j < inp[i].size(); j++) st.insert(inp[i][j]);
            for (int j = 0; j < inp[i-1].size(); j++){
                tmp = st.size(); st.insert(inp[i-1][j]);
                if (st.size()!=tmp) mp[inp[i-1][j]] = i-1;
            }
        }
        for (int j = 0; j < inp[m-1].size(); j++) mp[inp[m-1][j]] = m-1;
        vector <int> answer(m, -1);
        for (auto &it:mp) answer[it.second] = it.first;
        check = true;
        for (auto &it:answer){
            if (it==-1) check = false;
        }
        if (!check) cout << -1;
        else for (auto &it:answer) cout << it << " "; 
        cout << '\n';
    }
    return 0;
}