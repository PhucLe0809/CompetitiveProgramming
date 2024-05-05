#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t cnt;
    string str;
    while (test--){
        cin >> str;
        if (str.size()==1){
            if (str[0]=='0') cout << 1 << '\n';
            else cout << 0 << '\n';
        }else{
            cnt = 0; str += '1';
            for (int i = 1; i < str.size(); i++){
                if (str[i]!=str[i-1] && str[i-1]=='0') cnt++;
            }
            cout << min(2, cnt) << '\n';
        }
    }
    return 0;
}