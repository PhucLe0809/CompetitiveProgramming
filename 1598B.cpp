#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, x;
    bool check;
    while (test--){
        cin >> n;
        vector <vector<int>> inp(5);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < 5; j++){
                cin >> x;
                if (x!=0) inp[j].push_back(i);
            }
        }
        check = false;
        for (int i = 0; i<4 && !check; i++){
            if (inp[i].size()<n/2) continue;
            for (int j = i+1; j<5 && !check; j++){
                set <int> st;
                for (int t = 0; t < inp[i].size(); t++) st.insert(inp[i][t]);
                for (int t = 0; t < inp[j].size(); t++) st.insert(inp[j][t]);
                if (st.size()==n && inp[i].size()>=n/2 && inp[j].size()>=n/2) check = true;
            }
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}