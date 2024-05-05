#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str;
    int32_t n, x; 
    while (test--){
        cin >> str;
        n = str.size();
        x = n;
        for (int i = n-1; i>= 0; i--){
            if (str[i]=='5'){
                for (int j = i-1; j >= 0; j--){
                    if (str[j]=='2' || str[j]=='7')
                        x = min(x, n-j-2);
                }
            }else if (str[i]=='0'){
                for (int j = i-1; j >= 0; j--){
                    if (str[j]=='0' || str[j]=='5')
                        x = min(x, n-j-2);
                }
            }
        }
        cout << x << '\n';
    }
    return 0;
}