#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, r, l;
    string str; char key;
    while (test--){
        cin >> n >> str;
        key = str[n/2-(n%2==0)];
        l = n/2-(n%2==0);
        r = l+1;
        for (; l>=0; l--){
            if (str[l]!=key) break;
        }
        for (; r<n; r++){
            if (str[r]!=key) break;
        }
        if (l<0 || r>n-1) cout << n << '\n';
        else cout << r-l-1 << '\n';
    }
    return 0;
}