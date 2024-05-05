#include <bits/stdc++.h>

using namespace std; 
int32_t inp[2005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, z, answer;
    while (test--){
        cin >> n >> z;
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp, inp+n);
        answer = inp[0]|z;
        for (int i = 1; i < n; i++) answer = max(answer, inp[i]|z);
        cout << answer << '\n';
    }
    return 0;
}