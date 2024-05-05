#include <bits/stdc++.h>

using namespace std; 
pair <int64_t, int32_t> inp[1005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> inp[i].first; 
        inp[i].second = i;
    }
    sort(inp+1, inp+n+1, greater<>());
    int64_t answer = 0;
    for (int64_t i = 0; i < n; i++){
        answer += (inp[i+1].first*i+1);
    }
    cout << answer << '\n';
    for (int i = 1; i <= n; i++) cout << inp[i].second << " ";
    return 0;
}