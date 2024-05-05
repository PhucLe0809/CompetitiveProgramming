#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, a, b, even, odd;
    string str;
    while (test--){
        cin >> n >> str;
        a = b = -1; 
        odd = even = 0;
        for (int i = 0; i < n; i++){
            if ((str[i]-'0')%2!=0){
                if (a==-1) a = i;
                else b = i;
                odd++;
            }else even++;
        }
        if (even==n || odd==1) cout << -1 << '\n';
        else cout << str[a] << str[b] << '\n';
    }
    return 0;
}