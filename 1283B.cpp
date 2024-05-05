#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, k, answer;
    while (test--){
        cin >> n >> k;
        answer = (n/k)*k;
        answer += min(n%k, k/2);
        cout << answer << '\n';
    }
    return 0;
}