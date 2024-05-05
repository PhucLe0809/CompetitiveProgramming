#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t ax, ay, bx, by, cx, cy;
    int32_t answer;
    while (test--){
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        answer = 0;
        if(!(ax - bx < 0)^(ax - cx < 0)) {
            answer += min(abs(ax - bx), abs(ax - cx));
        }
        if(!(ay - by < 0)^(ay - cy < 0)) {
            answer += min(abs(ay - by), abs(ay - cy));
        }
        cout << answer+1 << '\n';
    }
    return 0;
}