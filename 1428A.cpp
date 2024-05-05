#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t x1, y1, x2, y2, answer;
    while (test--){
        cin >> x1 >> y1 >> x2 >> y2;
        answer = abs(x1-x2)+abs(y1-y2);
        if (x1!=x2 && y1!=y2) answer += 2;
        cout << answer << '\n';
    }
    return 0;
}