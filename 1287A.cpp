#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, t, answer, cnt; 
    string str;
    while (test--){
        cin >> n >> str;
        t = 0; str += 'A';
        while (str[t]=='P') t++;
        answer = cnt = 0;
        for (int i = t; i <= n; i++){
            if (str[i]=='P') cnt++;
            else{
                answer = max(answer, cnt);
                cnt = 0;
            }
        }
        cout << answer << '\n';
    }
    return 0;
}