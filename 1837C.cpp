#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    string str;
    int cnt;
    while (test--){
        cin >> str;
        cnt = 0;
        for (int i = 0; i < str.size(); i++){
            if (str[i]=='?'){
                if (i==0) str[i]='0';
                else str[i] = str[i-1];
            }
        }
        cout << str << '\n';
    }
    return 0;
}