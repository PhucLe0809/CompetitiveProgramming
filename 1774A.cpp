#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    string str, res; char last;
    while (test--){
        cin >> n >> str;
        last = str[0]; res = "";
        for(int i = 1; i < n; i++){
            if (str[i] == last){
                res += '-';
                last = '0';
            }else{
                res += '+';
                last = '1';
            }
        }
        cout << res << '\n';
    }
    return 0;
}