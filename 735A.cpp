#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k; cin >> n >> k;
    string str; cin >> str;
    int32_t g, t;
    for (int i = 0; i < n; i++){
        if (str[i]=='G') g = i;
        if (str[i]=='T') t = i;
    }
    if (g > t){
        reverse(str.begin(), str.end());
        g = n-g-1;
        t = n-t-1;
    }
    bool check = true;
    while (g<n && check){
        g += k;
        if (str[g]=='#' || g>t) check = false;
        else{
            if (g==t || g>=n) break;
        }
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}