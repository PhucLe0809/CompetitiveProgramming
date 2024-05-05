#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    string str; bool check;
    bool tick[3];
    while (test--){
        cin >> str;
        for (int i = 0; i < str.size(); i++){
            if (str[i]!='?') continue;
            fill(tick, tick+3, false);
            if (i-1>=0 && str[i-1]!='?') tick[str[i-1]-'a']=true;
            if (i+1<str.size() && str[i+1]!='?') tick[str[i+1]-'a']=true;
            for (int j = 0; j < 3; j++){
                if (!tick[j]) str[i] = char('a'+j);
            }
        }
        check = true;
        for (int i = 1; i < str.size(); i++){
            if (str[i]==str[i-1]) check = false;
        }
        if (check) cout << str << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}