#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, a, b, answer;
    while (test--){
        cin >> n >> a >> b;
        if (2*a<b) answer = n*a;
        else answer = (n/2)*b + (n%2)*a;
        cout << answer << '\n';
    }
    return 0;
}