#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s; cin >> s;
    int n = s.size(), space = 0;
    int i = 0;
    while(i < n){
        if(s[i+1]=='/')
            space--;
        int d = space;
        while(d--) cout << "  ";
        if(s[i+1]=='/'){
            cout << s[i] << s[i+1] << s[i+2] << s[i+3] << '\n';
            i += 4;
        }else{
            cout << s[i] << s[i+1] << s[i+2] << '\n';
            i += 3;
            space++;
        }
    }
    return 0;
}