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
        cin >> n >> str;
        answer = 0;
        for (int i = 0; i < n; i++){
            answer += str[i];
            if (str[i]!='0') answer++;
        }
        answer -= n*48;
        if (str[n-1]!='0') answer--;
        cout << answer << '\n';
    }
    return 0;
}