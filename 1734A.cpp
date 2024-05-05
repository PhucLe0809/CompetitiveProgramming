#include <bits/stdc++.h>
#define maxarray 305

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, answer;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp, inp+n);
        answer = (inp[1]-inp[0])+(inp[2]-inp[1]);
        for (int i = 2; i < n-1; i++){
            answer = min(answer, inp[i]-inp[i-1]+inp[i+1]-inp[i]);
        }
        cout << answer << '\n';
    }
    return 0;
}