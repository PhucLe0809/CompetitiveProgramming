#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    int cnt, answer;
    answer = 1; cnt = 1;
    for (int i = 1; i < str.size(); i++){
        if (str[i] == str[i-1]) cnt++;
        else{
            answer = max(answer, cnt); 
            cnt = 1;
        }
    }
    answer = max(answer, cnt);
    cout << answer;
    return 0;
}