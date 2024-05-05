#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t m, n, s, x, plus;
    while (test--){
        cin >> m >> s;
        plus = 0; n = -1;
        for (int i = 0; i < m; i++){
            cin >> x; plus += x;
            n = max(n, x);
        }
        if ((n*(n+1)/2-plus)>s) cout << "NO\n";
        else{
            s -= (n*(n+1)/2-plus); plus = n+1;
            while (s>0){
                s -= plus; plus++;
            }
            if (s==0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}