#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str;
    int32_t n, cnt;
    while (test--){
        cin >> n >> str;
        cnt = 0;
        for (int i = n-1; i >= 0; i--){
            if (str[i]!=')') break;
            cnt++;
        }
        if (cnt>(n-cnt)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}