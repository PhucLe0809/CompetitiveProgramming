#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str; str += '.';
    int cnt = 1, len = str.size();
    for (int i = 1; i < len; i++){
        if (str[i] == str[i-1]) cnt++;
        else{
            cout << cnt << str[i-1];
            cnt = 1;
        }
    }
}