#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t a, b, answer;
    while (test--){
        cin >> a >> b;
        b = abs(a-b); answer = 0;
        answer += b/5; b -= (b/5)*5;
        answer += b/2; b -= (b/2)*2;
        answer += b;
        cout << answer << '\n';
    }
    return 0;
}