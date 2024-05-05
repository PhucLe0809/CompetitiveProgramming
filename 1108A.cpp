#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    pair <int32_t, int32_t> one, two;
    while (test--){
        cin >> one.first >> one.second;
        cin >> two.first >> two.second;
        if (one.first!=two.first) 
            cout << one.first << " " << two.first;
        else if (one.second!=two.second)
                cout << one.second << " " << two.second;
            else cout << one.first << " " << two.second;
        cout << '\n';
    }
    return 0;
}