#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str, b;
    char a;
    while (test--){
        cin >> str;
        a = char(*min_element(str.begin(), str.end()));
        b = str;
        for (int i = 0; i < b.size(); i++){
            if (b[i]==a){
                b.erase(i, 1); break;
            }
        }
        cout << a << " " << b << '\n';
    }
    return 0;
}