#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    string str;
    int p, s, t;
    while (test--){
        cin >> str >> p;
        s = 0;
        vector <pair<char, int>> scan;
        for (int i = 0; i < str.size(); i++){
            s += (str[i]-'a'+1);
            scan.push_back({str[i], i});
        }
        if (s<=p){
            cout << str << '\n'; continue;
        }
        sort(scan.begin(), scan.end());
        t = str.size()-1;
        while (s>p && t>=0){
            s -= (scan[t].first-'a'+1);
            str[scan[t].second]='#';
            t--;
        }
        for (int i = 0; i < str.size(); i++){
            if (str[i]!='#') cout << str[i];
        }
        cout << '\n';
    }
    return 0;
}