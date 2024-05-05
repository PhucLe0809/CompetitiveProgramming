#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t answer = 0;
    int32_t x, y;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        answer = max(answer, x+y);
    }
    cout << answer;
    return 0;
}