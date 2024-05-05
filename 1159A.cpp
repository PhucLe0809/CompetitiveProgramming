#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    int32_t cnt = 0;
    for (auto x:str){
        if (x=='-') cnt = max(cnt-1, 0);
        else cnt++;
    }
    cout << cnt;
    return 0;
}