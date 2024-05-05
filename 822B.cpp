#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    vector <int> out(n+1), ele;
    for (int i = 0; i <= m-n; i++){
        ele.clear();
        for (int j = 0; j < n; j++){
            if (s[j]!=t[i+j]){
                ele.push_back(j+1);
            }
        }
        if (ele.size() < out.size()) out = ele;
    }
    cout << out.size() << '\n';
    for (auto &it:out) cout << it << " ";
    return 0;
}   