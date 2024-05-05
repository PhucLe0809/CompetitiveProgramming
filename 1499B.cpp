#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    string str;
    int cnt; bool check;
    while (test--){
        cin >> str; str += ('1'-str.back());
        cnt = 1;
        vector <pair<char, int>> scan;
        for (int i = 1; i < str.size(); i++){
            if (str[i]==str[i-1]) cnt++;
            else{
                scan.push_back({str[i-1], cnt});
                cnt = 1;
            }
        }
        if (scan.size()==1) cout << "YES\n";
        else{
            check = true; cnt = 0;
            for (int i = 0; i<scan.size() && check; i++){
                if (scan[i].first=='0'){
                    if (cnt>0 && scan[i].second>1){
                        check = false;
                    }
                }else if (scan[i].second>1) cnt++;
            }
            if (check) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}