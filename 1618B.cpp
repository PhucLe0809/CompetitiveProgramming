#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    string str, x;
    while (test--){
        cin >> n;
        str = "";
        for (int i = 0; i < n-2; i++){
            cin >> x;
            if (str.size()>0 && str[str.size()-1]==x[0])
                str += x[1];
            else str += x;
        }
        if (str.size()<n) str += 'a';
        cout << str << '\n';
    }
    return 0;
}