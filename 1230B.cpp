#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    string str; cin >> str;
    if (k==0) cout << str;
    else{
        if (str.size()==1) cout << 0;
        else{
            if (str[0]!='1'){
                str[0] = '1'; k--;
            }
            int i = 1;
            while (i<str.size() && k>0){
                if (str[i]!='0'){
                    str[i] = '0'; k--;
                }
                i++;
            }
            cout << str;
        }
    }
    return 0;
}