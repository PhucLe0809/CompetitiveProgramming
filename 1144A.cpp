#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str;
    bool check;
    while (test--){
        cin >> str;
        sort(str.begin(), str.end());
        check = true;
        for (int i=1; i<str.size() && check; i++){
            if (str[i]==str[i-1] || str[i]-str[i-1]!=1) check = false;
        }
        if (check) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}