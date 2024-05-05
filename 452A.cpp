#include <bits/stdc++.h>

using namespace std;
string pokemon[8]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    int pos = -1; bool check;
    for (int i = 0; i<8 && pos==-1; i++){
        if (pokemon[i].size()!=str.size()) continue;
        check = true;
        for (int j = 0; j < n; j++){
            if (pokemon[i][j]!=str[j] && str[j]!='.'){
                check = false; break;
            }
        }
        if (check) pos = i;
    }
    cout << pokemon[pos];
    return 0;
}