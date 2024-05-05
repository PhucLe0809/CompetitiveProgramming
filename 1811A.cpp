#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    string str; char key;
    while (test--){
        cin >> n >> key >> str;
        for (int i = 0; i < n; i++){
            if (key > str[i]){
                str.insert(i, 1, key);
                break;
            }
        }
        if (str.size()==n) str += key;
        cout << str << '\n';
    }
    return 0;
}