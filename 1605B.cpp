#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n; string str;
    while (test--){
        cin >> n >> str;
        if (is_sorted(str.begin(), str.end())){
            cout << 0 << '\n'; continue;
        }
        string ansi = str;
        sort(ansi.begin(), ansi.end());
        vector <int> out;
        for (int i = 0; i < str.size(); i++){
            if (str[i]!=ansi[i]) out.push_back(i+1);
        }
        cout << 1 << '\n' << out.size() << " ";
        for (auto &it:out) cout << it << " ";
        cout << '\n';
    }
    return 0;
}