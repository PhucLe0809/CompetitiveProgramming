#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t w, h; cin >> w >> h;
    pair <int32_t, int32_t> one, two;
    cin >> one.first >> one.second;
    cin >> two.first >> two.second;
    int32_t answer = w;
    for (int i = h; i >= 0; i--){
        answer += i;
        if (i==two.second) answer = max(answer-two.first, 0);
        if (i==one.second) answer = max(answer-one.first, 0);
    }
    cout << answer;
    return 0;
}