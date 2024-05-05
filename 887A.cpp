#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    bool check = false; int cnt;
    if (str.size()<6){
        cout << "no\n"; return 0;
    }
    for (int i = 0; i <= str.size()-6 && !check; i++){
        if (str[i]=='0') continue;
        cnt = 0;
        for (int j = i+1; j < str.size(); j++){
            if (str[j]=='0') cnt++;
        }
        if (cnt>5) check = true;
    }
    if (check) cout << "yes\n";
    else cout << "no\n";
    return 0;
}