#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t w, h, k; cin >> w >> h >> k;
    int32_t answer = 0;
    for (int i = 0; i < k; i++){
        answer += 2*(w-4*i)+2*(h-4*i)-4;
    }
    cout << answer;
    return 0;
}