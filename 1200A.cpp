#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    string scan = "";
    for (int i = 0; i < 10; i++) scan += '0';
    int32_t k;
    for (int t = 0; t < n; t++){
        //cout << scan << '\n';
        if (str[t]=='L'){
            for (int i = 0; i < 9; i++){
                if (scan[i]=='0'){ 
                    scan[i]='1'; break;
                }
            }
        }else{
            if (str[t]=='R'){
                for (int i = 9; i >= 0; i--){
                    if (scan[i]=='0'){
                        scan[i]='1'; break;
                    }
                }
            }else{
                k = str[t]-48;
                scan[k]='0';
            }
        }
    }
    cout << scan;
    return 0;
}