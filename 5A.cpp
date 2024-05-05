#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; 
    int cnt = 0, answer = 0;
    while (getline(cin, str)){
        if (str[0]=='+') cnt++;
        else{
            if (str[0]=='-') cnt--;
            else{
                for (int i = 0; i < str.size(); i++){
                    if (str[i]==':'){
                        answer += (str.size()-i-1)*cnt;
                        break;
                    }
                }
            }
        }
    }
    cout << answer;
    return 0;
}