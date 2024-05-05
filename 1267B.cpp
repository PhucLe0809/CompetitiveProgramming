#include <bits/stdc++.h>

using namespace std;
vector <pair<char, int>> scan;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    int cnt = 1; str += '#';
    for (int i = 0; i < str.size()-1; i++){
        if (str[i]==str[i+1]) cnt++;
        else{
            scan.push_back({str[i], cnt});
            cnt = 1;
        }
    }
    int m, t; m = scan.size(); t = 0;
    bool check = (m%2); 
    while (t<scan.size()/2 && check){
        if (scan[t].first!=scan[m-t-1].first) check = false;
        else{
            if (scan[t].second+scan[m-t-1].second<3) check = false;
            else t++;
        }
    }
    if (!check || scan[m/2].second<2) cout << 0;
    else cout << scan[m/2].second+1;
    return 0;
}