#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, i, j; string str;
    string pivot = "meow";
    while (test--){
        cin >> n >> str;
        if (tolower(str[n-1])!='w') cout << "No\n";
        else{
            i = n-1; j = 3;
            while (i>=0 && j>=0){
                if (tolower(str[i])==tolower(pivot[j])){
                    while (i>=0 && j>=0 && tolower(str[i])==tolower(pivot[j])) i--;
                    j--;
                } else break;
            }
            if (j<0 && i<0) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}