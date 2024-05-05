#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str;
    int32_t answer;
    while (test--){
        cin >> str;
        if (str.size()==1){
            cout << "Bob" << " " << str[0]-'a'+1 << '\n';
        }else{
            cout << "Alice" << " ";
            answer = 0;
            for (auto x:str) answer += (x-'a'+1);
            if (str.size()%2!=0) answer -= 2*(min(str[0], str[str.size()-1])-'a'+1);
            cout << answer << '\n';
        }
    }
    return 0;
}