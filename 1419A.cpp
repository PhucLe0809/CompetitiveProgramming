#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, odd, even;
    string str;
    while (test--){
        cin >> n >> str;
        odd = even = 0;
        for (int i = 0; i < n; i+=2){
            if ((str[i]-'0')%2!=0) odd++;
        }
        for (int i = 1; i < n; i+=2){
            if ((str[i]-'0')%2==0) even++;
        }
        if (n%2!=0){
            if (odd>0) cout << 1; else cout << 2;
        }
        if (n%2==0){
            if (even>0) cout << 2; else cout << 1;
        }
        cout << '\n';
    }
    return 0;
}