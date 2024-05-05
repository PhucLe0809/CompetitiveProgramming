#include <bits/stdc++.h>

using namespace std; 
int32_t inp[1005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, answer;
    while (test--){
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp, inp+n);
        answer = 0;
        for (int i = 1; i < n; i++){
            answer += (k-inp[i])/inp[0];
        }
        cout << answer << '\n';
    }
    return 0;
}