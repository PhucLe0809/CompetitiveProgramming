#include <bits/stdc++.h>

using namespace std; 
int64_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    int64_t answer;
    while (test--){
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> inp[i];
        sort(inp+1, inp+n+1);
        answer = 0;
        for (int i = 1; i <= n; i++){
            answer = max(answer, inp[i]*(n-i+1));
        }
        cout << answer << '\n';
    }
    return 0;
}