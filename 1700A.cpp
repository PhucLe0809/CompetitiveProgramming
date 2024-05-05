#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m; int64_t answer;
    while (test--){
        cin >> n >> m;
        answer = 0;
        for (int j = 1; j <= m; j++) answer += j;
        for (int i = 2; i <= n; i++) answer += ((i-1)*m+m);
        cout << answer << '\n';
    }
    return 0;
}