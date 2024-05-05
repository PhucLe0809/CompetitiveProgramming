#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    if (str.size()<3){
        cout << str; return 0;
    }
    string ansi, tmp;
    for (int i = 0; i <= n-3; ){
        tmp = str.substr(i, 3);
        if (tmp!="ogo"){
            ansi += str[i]; i++;
        }else{
            ansi += "***";
            i += 3;
            while (i<=n-2){
                if (str[i]=='g' && str[i+1]=='o'){
                    i++;
                }else break;
                i++;
            }
        }
        if (i > n-3){
            tmp = str.substr(i, n-i);
            ansi += tmp;
        }
    }
    cout << ansi;
    return 0;
}