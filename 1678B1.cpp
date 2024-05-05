#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt, replace;
    string str;
    while (test--){
        cin >> n >> str;
        cnt = 1;
        replace = 0;
        for (int i = 1; i < n; i++){
            if (str[i]==str[i-1]) cnt++;
            else{
                if (cnt%2==0) cnt = 1;
                else{
                    str[i]='1'-str[i];
                    cnt++; replace++;
                }
            }
        }
        cout << replace << '\n';
    }
    return 0;
}