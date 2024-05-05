#include <bits/stdc++.h>
#define maxarray 1005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, h, answer;
    while (test--){
        cin >> n >> h;
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp, inp+n, greater<>());
        answer = h/(inp[0]+inp[1]);
        answer *= 2;
        if (h%(inp[0]+inp[1])!=0){
            if (h%(inp[0]+inp[1]) <= inp[0]) answer++;
            else answer += 2;
        }
        cout << answer << '\n';
    }
    return 0;
}