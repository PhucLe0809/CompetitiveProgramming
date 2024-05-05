#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; int32_t cnt;
    string pivot = "codeforces";
    while (test--){
        cin >> str;
        cnt = 0;
        for (int i = 0; i < 10; i++){
            if (str[i]!=pivot[i]) cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}