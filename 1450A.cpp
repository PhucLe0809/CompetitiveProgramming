#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt, t;
    string str;
    while (test--){
        cin >> n >> str;
        cnt = t = 0;
        while (t < str.size()){
            if (str[t]=='b'){
                cnt++; 
                str.erase(t, 1);
            } else t++;
        }
        for (int i = 0; i < cnt; i++) cout << "b";
        cout << str << '\n';
    }
    return 0;
}