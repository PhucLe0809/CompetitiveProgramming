#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    string str; cin >> str;
    int32_t l, r;
    char c1, c2;
    while (m--){
        cin >> l >> r >> c1 >> c2;
        for (int i = l-1; i <= r-1; i++){
            if (str[i]==c1) str[i] = c2;
        }
    }
    cout << str;
    return 0;
}