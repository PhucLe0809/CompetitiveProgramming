#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    int a, b; a = b = 0;
    for (auto x:str){
        if (x=='X') a++; else b++;
    }
    int m = min(abs(n/2-a), abs(n/2-b));
    cout << m << '\n';
    if (m==0) cout << str;
    else{
        int d;
        if (abs(n/2-a)<abs(n/2-b)){
            d = abs(n/2-a);
            if (a<=n/2){
                for (int i = 0; i<n && d; i++){
                    if (str[i]=='x'){
                        str[i]='X'; d--;
                    }
                }
            }else{
                for (int i = 0; i<n && d; i++){
                    if (str[i]=='X'){
                        str[i]='x'; d--;
                    }
                }
            }
        }else{
            d = abs(n/2-b);
            if (b<=n/2){
                for (int i = 0; i<n && d; i++){
                    if (str[i]=='X'){
                        str[i]='x'; d--;
                    }
                }
            }else{
                for (int i = 0; i<n && d; i++){
                    if (str[i]=='x'){
                        str[i]='X'; d--;
                    }
                }
            }
        }
        cout << str;
    }
    return 0;
}