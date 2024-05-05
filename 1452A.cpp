#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test; 
    int64_t x, y, answer;
    while (test--){
        cin >> x >> y;
        if (x < y) swap(x, y);
        answer = (x-y)*2 - 1;
        if (answer < 0) answer = 0;
        cout << answer + 2*y << '\n';
    }
    return 0;
}