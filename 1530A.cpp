#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; int32_t answer;
    while (test--){
        cin >> str;
        answer = 0;
        for (auto x:str){
            answer = max(answer, x-48);
        }
        cout << answer << '\n';
    }
    return 0;
}