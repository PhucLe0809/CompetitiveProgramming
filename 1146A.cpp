#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    int32_t temp, cnt = 0;
    for (auto x:str)
        if (x=='a') cnt++;
    temp = str.size();
    cout << min(temp, 2*cnt-1) << '\n';
    return 0;
}