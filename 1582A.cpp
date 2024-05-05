#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t a, b, c, answer;
    while (test--){
        cin >> a >> b >> c;
        answer = (a+2*b+3*c)%2;
        cout << answer << '\n';
    }
    return 0;
}