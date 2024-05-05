#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    if (n%4!=0) cout << "===";
    else{
        map <char, int> mp;
        mp['A'] = mp['G'] = mp['C'] = mp['T'] = 0;
        for (auto x:str) if (x!='?') mp[x]++;
        bool check = true;
        vector <int> inp;
        for (auto x:mp){
            inp.push_back(n/4-x.second);
            if (n/4-x.second<0) check = false;
        }
        for (int i = 0; i<n && check; i++){
            if (str[i]=='?'){
                for (int j = 0; j < 4; j++){
                    if (inp[j]>0){
                        switch(j){
                            case 0: str[i]='A'; break;
                            case 1: str[i]='C'; break;
                            case 2: str[i]='G'; break;
                            case 3: str[i]='T'; break;
                        }
                        inp[j]--; break;
                    }
                }
            }
        }
        if (!check) cout << "===";
        else cout << str;
    }
    return 0;
}   