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
        cin >> n >> str;
        key = *min_element(str.begin(), str.end());
        cout << key;
        for (int i = n-1; i >= 0; i--){
            if (str[i]==key){
                str.erase(i, 1); break;
            }
        }
        cout << str << '\n';
    }
    return 0;
}