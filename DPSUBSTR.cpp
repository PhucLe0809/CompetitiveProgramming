#include <bits/stdc++.h>
#define maxarray 2005

using namespace std; 
vector <vector<int32_t>> scan(maxarray, vector <int32_t> (maxarray, 0));

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str, ansi; cin >> str >> ansi;
    str.insert(0, "0"); ansi.insert(0, "0");
    for (int i = 1; i < str.size(); i++){
        for (int j = 1; j < ansi.size(); j++){
            if (str[i]==ansi[j]){
                scan[i][j] = scan[i-1][j-1]+1;
            }else scan[i][j] = max(scan[i-1][j], scan[i][j-1]);
        }
    }
    cout << scan[str.size()-1][ansi.size()-1] << '\n';
    // int32_t i = str.size()-1;
    // int32_t j = ansi.size()-1;
    // string out = "";
    // while (i>0 && j>0){
    //     if (str[i]==ansi[j]){
    //         out += str[i]; 
    //         i--; j--;
    //     }
    //     else{
    //         if (scan[i][j]==scan[i-1][j]) i--;
    //         else j--;
    //     }
    // }
    // reverse(out.begin(), out.end());
    // cout << out;
    return 0;
}