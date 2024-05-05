#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    int32_t cnt = 0;
    for (int i = 0; i < n-1; i += 2){
        if (str[i]!=str[i+1]) {}
        else{
            cnt++;
            if (str[i]=='a'){
                str[i+1] = 'b';
            } else str[i] = 'a';
        }
    }
    cout << cnt << '\n';
    cout << str;
    return 0;
}