#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    char key = *max_element(str.begin(), str.end());
    for (auto x:str){
        if (x==key) cout << x;
    }
    return 0;
}