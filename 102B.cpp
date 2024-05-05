#include <bits/stdc++.h>

using namespace std;

int sum_digit(string str){
    int out = 0;
    for (auto &it:str) out += (it-'0');
    return out;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    if (str.size()==1 && str<="9"){
        cout << 0; return 0;
    }
    int cnt = 1;
    int tmp = sum_digit(str);
    while (tmp>9){
        cnt++;
        str = to_string(tmp);
        tmp = sum_digit(str);
    }
    cout << cnt;
    return 0;
}