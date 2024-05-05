#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    int32_t cnt0, cnt1;
    cnt0 = cnt1 = 0;
    for (auto x:str){
        if (x=='1') cnt1++;
        else cnt0++;
    }
    if (cnt1!=cnt0){
        cout << 1 << '\n' << str << '\n';
    }else{
        cout << 2 << '\n';
        cout << str[0] << " " << str.substr(1, n-1) << '\n';
    }
    return 0;
}