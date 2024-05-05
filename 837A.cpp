#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string n; getline(cin, n);
    string str; getline(cin, str);
    while (str[0]==' ') str.erase(0, 1);
    while (str.back()==' ') str.erase(str.size()-1, 1);
    int32_t i = 0;
    while (i < str.size()){
        if (str[i]==' ' && str[i+1]==' ') str.erase(i, 1);
        else i++;
    }
    int32_t answer = 0;
    int32_t cnt = 0;
    str += ' ';
    for (int i = 0; i < str.size(); i++){
        if (str[i]!=' '){
            if (str[i]>='A' && str[i]<='Z') cnt++;
        }else{
            answer = max(answer, cnt);
            cnt = 0;
        }
    }
    cout << answer;
    return 0;
}