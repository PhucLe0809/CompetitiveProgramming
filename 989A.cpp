#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    if (str.size()<3){
        cout << "No\n"; return 0;
    }
    bool check = false;
    for (int i = 1; i<str.size()-1 && !check; i++){
        if (str[i-1]!='.' && str[i]!='.' && str[i+1]!='.'){
            if (str[i-1]!=str[i] && str[i]!=str[i+1] && str[i-1]!=str[i+1]){
                check = true;
            }
        }
    }
    if (check) cout << "Yes\n";
    else cout << "No\n";    
    return 0;
}