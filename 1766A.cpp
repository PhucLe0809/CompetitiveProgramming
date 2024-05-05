#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, answer;
    string str;
    while (test--){
        cin >> n;
        if (n<10) cout << n << '\n';
        else{
            str = to_string(n);
            answer = (str.size()-2)*9+(str[0]-48)+9;
            cout << answer << '\n';
        }
    }
    return 0;
}