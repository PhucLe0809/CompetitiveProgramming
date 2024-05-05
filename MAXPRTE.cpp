#include <bits/stdc++.h>

using namespace std; 
vector <vector<string>> scan(105, vector <string> (105, ""));

string str_max(string one, string two){
    if (one.size()!=two.size()){
        int32_t m = max(one.size(), two.size());
        while (one.size()<m) one.insert(0, "0");
        while (two.size()<m) two.insert(0, "0");
    }
    if (one>two) return one;
    else return two;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str, ansi; cin >> str >> ansi;
    str.insert(0, "0"); ansi.insert(0, "0");
    int32_t a = str.size(), b = ansi.size();
    for (int i = 1; i < a; i++){
        for (int j = 1; j < b; j++){
            if (str[i]==ansi[j]){
                scan[i][j] = scan[i-1][j-1]+str[i];
            }else scan[i][j] = str_max(scan[i-1][j], scan[i][j-1]);

        }
    }
    while (scan[a-1][b-1][0]=='0' && scan[a-1][b-1].size()>1) scan[a-1][b-1].erase(0, 1);
    if (scan[a-1][b-1].size()==0) cout << -1;
    else cout << scan[a-1][b-1];
    return 0;
}