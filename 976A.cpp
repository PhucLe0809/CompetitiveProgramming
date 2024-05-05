#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    int32_t cnt0 = 0;
    for (auto x:str){
        if (x=='0') cnt0++;
    }
    if (cnt0==str.size()) cout << str;
    else{
        cout << 1;
        for (int i = 0; i < cnt0; i++) cout << 0;
    }
    return 0;
}