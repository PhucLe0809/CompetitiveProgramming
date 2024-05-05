#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; str = to_string(n);
    if (str[str.size()-1]<'5') cout << (n/10)*10;
    else cout << (n/10)*10+10;
    return 0;
}