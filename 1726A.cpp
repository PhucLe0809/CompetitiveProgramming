#include <bits/stdc++.h>
#define maxarray 2005

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
        answer = max({*max_element(inp, inp+n)-inp[0], inp[n-1] - *min_element(inp, inp+n)});
        for (int i = 1; i < n; i++) answer = max(answer, inp[i-1]-inp[i]);
        cout << answer << '\n';
    }
    return 0;
}