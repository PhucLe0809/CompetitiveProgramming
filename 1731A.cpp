#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    int64_t answer, x;
    while (test--){
        cin >> n; answer = 1;
        for (int i = 0; i < n; i++){
            cin >> x; answer *= x;
        }
        answer += (n-1);
        answer *= 2022;
        cout << answer << '\n';
    }
    return 0;
}