#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t out, cnt;
    string str;
    while (test--){
        cin >> str;
        if (str.size()==1){
            if (str[0]=='^') cout << 1 << '\n';
            else cout << 2 << '\n';
            continue;
        }
        if (str[0]=='^') out = 0;
        else out = 1;
        if (str[str.size()-1]=='_'){
            str += '^'; out++;
        }
        cnt = 0;
        for (int i = 1; i < str.size(); i++){
            if (str[i]==str[i-1]) cnt++;
            else{
                if (str[i-1]=='_') out += cnt;
                cnt = 0;
            }
        }
        cout << out << '\n';
    }
    return 0;
}