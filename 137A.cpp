#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    int answer = 1;
    int cnt = 1;
    for (int i = 1; i < str.size(); i++){
        if (str[i]!=str[i-1] || cnt==5){
            answer++; cnt = 1;
        }else{
            cnt++;
        }
    }
    cout << answer;
    return 0;
}