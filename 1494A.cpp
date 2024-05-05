#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; 
    char l, m, r;
    int32_t cnt; bool check;
    while (test--){
        cin >> str;
        l = str[0];
        for (int i = 0; i < str.size(); i++){
            if (str[i]==l) str[i]='(';
        }
        for (int i = str.size()-1; i >= 0; i--){
            if (str[i]!=str[0]){
                r = str[i]; break;
            }
        }
        for (int i = str.size(); i >= 0; i--){
            if (str[i]==r) str[i]=')';
        }
        check = false;
        if (!check){
            cnt = 0;
            for (auto x:str){
                if (x!=')') cnt++;
                else cnt--;
                if (cnt < 0) break;
            }
            if (cnt==0) check = true;
        }
        if (!check){
            cnt = 0;
            for (auto x:str){
                if (x=='(') cnt++;
                else cnt--;
                if (cnt < 0) break;
            }
            if (cnt==0) check = true;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}