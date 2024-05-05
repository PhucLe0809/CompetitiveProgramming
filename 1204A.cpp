#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    if (str.size()==1 && str[0]=='0'){
        cout << 0; return 0;
    }
    int cnt = 0;
    for (auto x:str){
        if (x=='1') cnt++;
    }
    int answer = (str.size()-1)/2+1;
    if ((str.size()-1)%2==0 && cnt==1) answer--;
    cout << answer << '\n';
    return 0;
}