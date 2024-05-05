#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    int32_t eight = 0;
    for (auto x:str){
        if (x=='8') eight++;
    }
    cout << min(eight, n/11);
    return 0;
}