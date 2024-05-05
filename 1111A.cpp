#include <bits/stdc++.h>

using namespace std;

int check(char key){
    if (key=='a' || key=='o' || key=='e' || key=='u' || key=='i'){
        return 1;
    }return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str, ansi; cin >> str >> ansi;
    if (str.size()!=ansi.size()){
        cout << "No\n"; return 0; 
    }
    for (int i = 0; i < str.size(); i++){
        if (check(str[i])!=check(ansi[i])){
            cout << "No\n"; return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}