#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; string str;
    int32_t a, b, c, d, i;
    while (test--){
        cin >> n >> str;
        if (str.back()=='>') str += '<';
        else str += '>';
        c = d = 0;
        i = 0;
        while (i < str.size()){
            a = b = 0;
            while (str[i]=='>' && i<str.size()){
                a++; i++;
            }
            c = max(c, a);
            while (str[i]=='<' && i<str.size()){
                b++; i++;
            }
            d = max(d, b);
        } 
        cout << max(c, d)+1 << '\n'; 
    }
    return 0;
}