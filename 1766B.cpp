#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n; bool check;
    string str;
    while (test--){
        cin >> n; cin >> str;
        vector <vector<int>> scan(255);
        check = false;
        for (int i = 1; i<str.size() && !check; i++){
            for (int j = 0; j<scan[str[i]].size() && !check; j++){
                if (scan[str[i]][j]==i-1) continue;
                if (str[i-1]==str[scan[str[i]][j]-1]){
                    check = true;
                }
            }
            scan[str[i]].push_back(i);
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}