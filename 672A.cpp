#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str = "";
    int32_t x = 1;
    while (str.size() < n){
        str += to_string(x); x++;
    }
    cout << str[n-1];
    return 0;
}