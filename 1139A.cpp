#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    int32_t answer = 0;
    for (int i = 0; i < n; i++){
        if ((str[i]-'0')%2==0) answer += (i+1);
    }
    cout << answer << '\n';
    return 0;
}